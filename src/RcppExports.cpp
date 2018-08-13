// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// CppLOp
Eigen::MatrixXd CppLOp(Eigen::VectorXd w, int n);
RcppExport SEXP _spectralGraphTopology_CppLOp(SEXP wSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(CppLOp(w, n));
    return rcpp_result_gen;
END_RCPP
}
// CppLStarOp
Eigen::VectorXd CppLStarOp(Eigen::MatrixXd Y);
RcppExport SEXP _spectralGraphTopology_CppLStarOp(SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(CppLStarOp(Y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spectralGraphTopology_CppLOp", (DL_FUNC) &_spectralGraphTopology_CppLOp, 2},
    {"_spectralGraphTopology_CppLStarOp", (DL_FUNC) &_spectralGraphTopology_CppLStarOp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_spectralGraphTopology(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
