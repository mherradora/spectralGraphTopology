// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// L
Eigen::MatrixXd L(const Eigen::VectorXd& w);
RcppExport SEXP _spectralGraphTopology_L(SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(L(w));
    return rcpp_result_gen;
END_RCPP
}
// Lstar
Eigen::VectorXd Lstar(const Eigen::MatrixXd& Y);
RcppExport SEXP _spectralGraphTopology_Lstar(SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(Lstar(Y));
    return rcpp_result_gen;
END_RCPP
}
// altLstar
Eigen::VectorXd altLstar(const Eigen::MatrixXd& Y);
RcppExport SEXP _spectralGraphTopology_altLstar(SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(altLstar(Y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spectralGraphTopology_L", (DL_FUNC) &_spectralGraphTopology_L, 1},
    {"_spectralGraphTopology_Lstar", (DL_FUNC) &_spectralGraphTopology_Lstar, 1},
    {"_spectralGraphTopology_altLstar", (DL_FUNC) &_spectralGraphTopology_altLstar, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_spectralGraphTopology(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
