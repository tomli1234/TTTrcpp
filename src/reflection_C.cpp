#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericMatrix reflection_C(NumericMatrix x, int direction){
      int nrow = x.nrow();
      if(direction == 1){
            for(int i=0; i<nrow; i++) {
                  NumericVector y = rev(x(_, i));
                  x(_, i) = y;
            }
      } else if(direction == 2){
            for(int i=0; i<nrow; i++) {
                  NumericVector y = rev(x(i, _));
                  x(i, _) = y;
            }
      }
      return x;
}
