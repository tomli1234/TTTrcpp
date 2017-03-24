#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double check_status_C(NumericVector x, int turn){
      NumericMatrix y, x_mat(5 ,5, x.begin());

      y = x_mat;
      // Check row
      for(int i=0; i<5; i++) {
            int consec = 1;
            for(int j=1; j<5; j++) {
                  if(y(i, j) > -1){
                        if(y(i, j) == y(i, j-1) & y(i, j) != -1) {
                              consec += 1;
                        }
                        if(consec == 5) {
                              return 1 - abs(y(i, j) - turn);
                        }
                  }
            }
      }
      // Check column
      y = transpose(x_mat);
      for(int i=0; i<5; i++) {
            int consec = 1;
            for(int j=1; j<5; j++) {
                  if(y(i, j) > -1){
                        if(y(i, j) == y(i, j-1) & y(i, j) != -1) {
                              consec += 1;
                        }
                        if(consec == 5) {
                              return 1 - abs(y(i, j) - turn);
                        }
                  }
            }
      }

      // Diagonal 1
      y = x_mat;
      NumericMatrix out1, out2;
      NumericVector out, list1;
      int nrow = y.nrow(), ncol = y.ncol();
      Function f1("row"),f2("col");
      out1 = f1(y);
      out2 = f2(y);
      out = out1 + out2;
      list1 = unique(out);
      for(int i = 0; i<list1.size(); i++) {
            int consec = 1;
            int x_prev = -2;
            for(int j =0; j <x.size(); j++) {
                  if(out[j] == list1[i] & x[j] != -1) {
                        if(x[j] == x_prev) {
                              consec += 1;
                        }
                        x_prev = x[j];
                  }
                  if(consec == 5) {
                        return 1 - abs(x[j] - turn);
                  }
            }
      }

      // Diagonal 2
      NumericMatrix revX = x_mat;
      ncol = x_mat.ncol();
      NumericVector x_i;
      for(int i=0; i<ncol; i++) {
            x_i = x_mat(_, i);
            std::reverse(x_i.begin(), x_i.end());
            revX(_ , i) = x_i;
      }

      y = revX;
      NumericVector x2;
      for(int i=0; i<5; i++) {
            for(int j=0; j<5; j++) {
                  x2.push_back(y(i,j));
            }
      }
      x = x2;

      out1 = f1(y);
      out2 = f2(y);
      out = out1 + out2;
      list1 = unique(out);
      for(int i = 0; i<list1.size(); i++) {
            int consec = 1;
            int x_prev = -2;
            for(int j =0; j <x.size(); j++) {
                  if(out[j] == list1[i]) {
                        if(x[j] == x_prev & x[j] != -1) {
                              consec += 1;
                        }
                        x_prev = x[j];
                  }
                  if(consec == 5) {
                        return 1 - abs(x[j] - turn);
                  }
            }
      }

      //Check draw
      int draw = 0;
      for(int i=0; i<25; i++) {
            if(x[i] == -1) {
                  draw += 1;
            }
      }
      if(draw == 0) {
            return 0;
      }

      return -1;
}
