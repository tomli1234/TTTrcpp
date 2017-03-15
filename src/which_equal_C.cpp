#include <Rcpp.h>
using namespace Rcpp;

// This is a simple function using Rcpp that creates an R list
// containing a character vector and a numeric vector.
//
// Learn more about how to use Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//
// and browse examples of code using Rcpp at:
//
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
NumericVector which_equal_C(NumericVector x, double k){
      int n = x.size();
      NumericVector match;
      for(int i = 0; i < n; ++i) {
            if(x[i] == k) {
                  match.push_back(i + 1);
            }
      }
      return match;
}
