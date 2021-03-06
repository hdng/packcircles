// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// iterate_layout
int iterate_layout(NumericMatrix xyr, NumericVector weights, double xmin, double xmax, double ymin, double ymax, int maxiter, bool wrap);
RcppExport SEXP packcircles_iterate_layout(SEXP xyrSEXP, SEXP weightsSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP maxiterSEXP, SEXP wrapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type xyr(xyrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type wrap(wrapSEXP);
    __result = Rcpp::wrap(iterate_layout(xyr, weights, xmin, xmax, ymin, ymax, maxiter, wrap));
    return __result;
END_RCPP
}
// doCirclePack
List doCirclePack(List internalList, DataFrame externalDF);
RcppExport SEXP packcircles_doCirclePack(SEXP internalListSEXP, SEXP externalDFSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type internalList(internalListSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type externalDF(externalDFSEXP);
    __result = Rcpp::wrap(doCirclePack(internalList, externalDF));
    return __result;
END_RCPP
}
