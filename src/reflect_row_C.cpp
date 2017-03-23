#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericMatrix reflect_row_C(NumericMatrix x){
      int nrow = x.nrow();
      for(int i=0; i<nrow; i++) {
            NumericVector y = rev(x(i, _));
            x(i, _) = y;
      }
      return x;
}
