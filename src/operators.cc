#include "operators.hh"
using namespace Eigen;
// [[Rcpp::depends(RcppEigen)]]

// [[Rcpp::export]]
Eigen::MatrixXd CppLOp(Eigen::VectorXd w, int n) {
    int j, k;
    Eigen::MatrixXd Lw = Eigen::MatrixXd::Zero(n, n);
    k = w.size();

    for (int i = n-2; i > -1; --i) {
        j = n - i - 1;
        Lw.row(i).tail(j) = -w.head(k).tail(j);
        k -= j;
    }

    Eigen::MatrixXd LwT = Lw.transpose();
    Lw += LwT;
    Eigen::MatrixXd LwColSum = Lw.colwise().sum().asDiagonal();
    Lw -= LwColSum;
    return Lw;
}

// [[Rcpp::export]]
Eigen::VectorXd CppLStarOp(Eigen::MatrixXd Y) {
    int n = Y.cols();
    int k = .5 * n * (n - 1);
    Eigen::VectorXd LStarY = Eigen::VectorXd::Zero(k);
    Eigen::MatrixXd Lw = Eigen::MatrixXd::Zero(n, n);

    for (int i = 0; i < k; ++i) {
        Eigen::VectorXd w = Eigen::VectorXd::Zero(k);
        w(i) = 1.;
        Lw = CppLOp(w, n);
        LStarY(i) = (Y.transpose() * Lw).trace();
    }

    return LStarY;
}
