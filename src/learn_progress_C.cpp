#include <Rcpp.h>
using namespace Rcpp;



// [[Rcpp::export]]
double learn_progress_C(NumericVector x){
      int n = x.size();
      double total = 0;
      for(int i; i < n; ++i) {
            total += pow(x[i] - 0.5, 2.0);
      }
      return total/n;
}
