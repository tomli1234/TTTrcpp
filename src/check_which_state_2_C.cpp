#include <Rcpp.h>
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

// declare check_which_state_C
int check_which_state_C(NumericMatrix x, NumericVector x2){
      int i = 0;
      int count = 0;
      int n = x.rows();
      while(count < 9 && i < n) {
            count = sum(x(i, _) == x2);
            i += 1;
      }
      if(count < 9){
            i = 0;
      }
      return i;
}

// [[Rcpp::export]]
NumericVector check_which_state_2_C(NumericMatrix x, NumericMatrix x2){
      int n = x2.rows();
      NumericVector output (n);
      for(int i = 0; i < n; ++i){
            output[i] = check_which_state_C(x, x2(i , _));
      }
      return output;
}
