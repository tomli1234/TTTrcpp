#include <Rcpp.h>
using namespace Rcpp;

// declare reflection_C
NumericMatrix reflection_C(NumericMatrix x, int direction){
      int nrow = x.nrow();
      NumericMatrix output(nrow, nrow);
      if(direction == 1){
            for(int i=0; i<nrow; i++) {
                  NumericVector y = rev(x(_, i));
                  output(_, i) = y;
            }
      } else if(direction == 2){
            for(int i=0; i<nrow; i++) {
                  NumericVector y = rev(x(i, _));
                  output(i, _) = y;
            }
      }
      return output;
}

NumericVector mat_to_vec_C(NumericMatrix x){
      int k = x.nrow();
      int ii = 0;
      NumericVector output(k*k);
      for(int i=0; i < k; i++){
            for(int j=0; j < k; j++){
                  output[ii] = x(j, i);
                  ii += 1;
            }
      }
      return output;
}

// [[Rcpp::export]]
NumericMatrix equivalent(NumericVector x){
      int k = sqrt(x.size());
      NumericMatrix y(k, k);
      int ii = 0;
      for(int i=0; i < k; i++){
            for(int j=0; j < k; j++){
                  y(j, i) = x[ii];
                  ii += 1;
            }
      }

      NumericMatrix output(8, k*k);

      output(0, _) = mat_to_vec_C(reflection_C(y, 1));
      output(1, _) = mat_to_vec_C(reflection_C(y, 2));
      output(2, _) = mat_to_vec_C(reflection_C(reflection_C(y, 1), 2));
      output(3, _) = mat_to_vec_C(y);
      output(4, _) = mat_to_vec_C(transpose(y));
      output(5, _) = mat_to_vec_C(reflection_C(transpose(y), 1));
      output(6, _) = mat_to_vec_C(reflection_C(transpose(y), 2));
      output(7, _) = mat_to_vec_C(reflection_C(reflection_C(transpose(y), 1), 2));

      return(output);
}
