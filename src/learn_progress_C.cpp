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

// [[Rcpp::export]]
double learn_progress_C(NumericVector x){
      int n = x.size();
      double total = 0;
      for(int i; i < n; ++i) {
            total += pow(x[i] - 0.5, 2.0);
      }
      return total/n;
}
