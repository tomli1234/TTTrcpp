// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// base3_to_decimal
double base3_to_decimal(NumericVector x);
RcppExport SEXP TTTrcpp_base3_to_decimal(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(base3_to_decimal(x));
    return rcpp_result_gen;
END_RCPP
}
// check_status_C
double check_status_C(NumericVector x, int turn);
RcppExport SEXP TTTrcpp_check_status_C(SEXP xSEXP, SEXP turnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type turn(turnSEXP);
    rcpp_result_gen = Rcpp::wrap(check_status_C(x, turn));
    return rcpp_result_gen;
END_RCPP
}
// check_which_state_2_C
NumericVector check_which_state_2_C(NumericMatrix x, NumericMatrix x2);
RcppExport SEXP TTTrcpp_check_which_state_2_C(SEXP xSEXP, SEXP x2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x2(x2SEXP);
    rcpp_result_gen = Rcpp::wrap(check_which_state_2_C(x, x2));
    return rcpp_result_gen;
END_RCPP
}
// learn_progress_C
double learn_progress_C(NumericVector x);
RcppExport SEXP TTTrcpp_learn_progress_C(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(learn_progress_C(x));
    return rcpp_result_gen;
END_RCPP
}
// equivalent
NumericMatrix equivalent(NumericVector x);
RcppExport SEXP TTTrcpp_equivalent(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(equivalent(x));
    return rcpp_result_gen;
END_RCPP
}
// rotate_90_C
NumericMatrix rotate_90_C(NumericMatrix x);
RcppExport SEXP TTTrcpp_rotate_90_C(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rotate_90_C(x));
    return rcpp_result_gen;
END_RCPP
}
// which_equal_C
NumericVector which_equal_C(NumericVector x, double k);
RcppExport SEXP TTTrcpp_which_equal_C(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(which_equal_C(x, k));
    return rcpp_result_gen;
END_RCPP
}
// which_equal_C_2
NumericVector which_equal_C_2(NumericVector x, NumericVector k);
RcppExport SEXP TTTrcpp_which_equal_C_2(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(which_equal_C_2(x, k));
    return rcpp_result_gen;
END_RCPP
}
