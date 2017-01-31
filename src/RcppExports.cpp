// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/bigsnpr.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mycount2
ListOf<SEXP> mycount2(SEXP pBigMat, const IntegerVector& indCase, const IntegerVector& indControl);
RcppExport SEXP bigsnpr_mycount2(SEXP pBigMatSEXP, SEXP indCaseSEXP, SEXP indControlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indCase(indCaseSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indControl(indControlSEXP);
    rcpp_result_gen = Rcpp::wrap(mycount2(pBigMat, indCase, indControl));
    return rcpp_result_gen;
END_RCPP
}
// clumping
LogicalVector clumping(XPtr<BigMatrix> xpMat, const IntegerVector& rowInd, const IntegerVector& colInd, const IntegerVector& ordInd, LogicalVector& remain, const NumericVector& sumX, const NumericVector& denoX, int size, double thr);
RcppExport SEXP bigsnpr_clumping(SEXP xpMatSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP ordIndSEXP, SEXP remainSEXP, SEXP sumXSEXP, SEXP denoXSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ordInd(ordIndSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type remain(remainSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sumX(sumXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type denoX(denoXSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(clumping(xpMat, rowInd, colInd, ordInd, remain, sumX, denoX, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// pruning
LogicalVector& pruning(XPtr<BigMatrix> xpMat, const IntegerVector& rowInd, const IntegerVector& colInd, LogicalVector& keep, const NumericVector& mafX, const NumericVector& sumX, const NumericVector& denoX, int size, double thr);
RcppExport SEXP bigsnpr_pruning(SEXP xpMatSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP keepSEXP, SEXP mafXSEXP, SEXP sumXSEXP, SEXP denoXSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< LogicalVector& >::type keep(keepSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mafX(mafXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sumX(sumXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type denoX(denoXSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(pruning(xpMat, rowInd, colInd, keep, mafX, sumX, denoX, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// rawToBigPart
void rawToBigPart(XPtr<BigMatrix> xpMat, const RawVector& source, const IntegerMatrix& tab, int size, int colOffset, int n, int bsz);
RcppExport SEXP bigsnpr_rawToBigPart(SEXP xpMatSEXP, SEXP sourceSEXP, SEXP tabSEXP, SEXP sizeSEXP, SEXP colOffsetSEXP, SEXP nSEXP, SEXP bszSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const RawVector& >::type source(sourceSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type tab(tabSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type colOffset(colOffsetSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type bsz(bszSEXP);
    rawToBigPart(xpMat, source, tab, size, colOffset, n, bsz);
    return R_NilValue;
END_RCPP
}
// writebina
void writebina(const char * filename, XPtr<BigMatrix> xpMat, const RawVector& tab);
RcppExport SEXP bigsnpr_writebina(SEXP filenameSEXP, SEXP xpMatSEXP, SEXP tabSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< XPtr<BigMatrix> >::type xpMat(xpMatSEXP);
    Rcpp::traits::input_parameter< const RawVector& >::type tab(tabSEXP);
    writebina(filename, xpMat, tab);
    return R_NilValue;
END_RCPP
}
