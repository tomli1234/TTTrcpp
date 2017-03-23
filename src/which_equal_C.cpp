#include <Rcpp.h>
using namespace Rcpp;


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
