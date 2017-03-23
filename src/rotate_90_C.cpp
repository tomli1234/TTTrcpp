#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericMatrix rotate_90_C(NumericMatrix x){
      int nrow = x.nrow();
      x = transpose(x);
      for(int i=0; i<nrow; i++) {
            NumericVector y = rev(x(i, _));
            x(i, _) = y;
      }
      return x;
}
