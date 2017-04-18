#include <Rcpp.h>
using namespace Rcpp;


// [[Rcpp::export]]
NumericVector which_equal_C_2(NumericVector x, NumericVector k){
      int n = x.size(), n_k = k.size(), match;
      NumericVector output(n_k);
      for(int j = 0; j < n_k; ++j){
            match = 0;
            for(int i = 0; i < n; ++i) {
                  if(x[i] == k[j]) {
                        match = i + 1;
                        break;
                  }
            }
            output[j] = match;
      }
      return output;
}
