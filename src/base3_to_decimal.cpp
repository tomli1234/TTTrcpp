#include <Rcpp.h>
using namespace Rcpp;


// [[Rcpp::export]]
double base3_to_decimal(NumericVector x){
      int n = x.size();
      double output = 0;
      for(int i = 0; i < n; i++){
            int multi = x[i];
            output += multi * pow(3, (n - i - 1));
      }
      return(output);
}
