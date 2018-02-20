// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "tesseract_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// tesseract_config
Rcpp::List tesseract_config();
RcppExport SEXP _tesseract_tesseract_config() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(tesseract_config());
    return rcpp_result_gen;
END_RCPP
}
// tesseract_engine_internal
TessPtr tesseract_engine_internal(Rcpp::CharacterVector datapath, Rcpp::CharacterVector language, Rcpp::CharacterVector confpath);
RcppExport SEXP _tesseract_tesseract_engine_internal(SEXP datapathSEXP, SEXP languageSEXP, SEXP confpathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type datapath(datapathSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type language(languageSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type confpath(confpathSEXP);
    rcpp_result_gen = Rcpp::wrap(tesseract_engine_internal(datapath, language, confpath));
    return rcpp_result_gen;
END_RCPP
}
// tesseract_engine_set_variable
TessPtr tesseract_engine_set_variable(TessPtr ptr, const char * name, const char * value);
RcppExport SEXP _tesseract_tesseract_engine_set_variable(SEXP ptrSEXP, SEXP nameSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< TessPtr >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const char * >::type name(nameSEXP);
    Rcpp::traits::input_parameter< const char * >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(tesseract_engine_set_variable(ptr, name, value));
    return rcpp_result_gen;
END_RCPP
}
// engine_info_internal
Rcpp::List engine_info_internal(TessPtr ptr);
RcppExport SEXP _tesseract_engine_info_internal(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< TessPtr >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(engine_info_internal(ptr));
    return rcpp_result_gen;
END_RCPP
}
// ocr_raw
Rcpp::String ocr_raw(Rcpp::RawVector input, TessPtr ptr, bool HOCR);
RcppExport SEXP _tesseract_ocr_raw(SEXP inputSEXP, SEXP ptrSEXP, SEXP HOCRSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< TessPtr >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< bool >::type HOCR(HOCRSEXP);
    rcpp_result_gen = Rcpp::wrap(ocr_raw(input, ptr, HOCR));
    return rcpp_result_gen;
END_RCPP
}
// ocr_file
Rcpp::String ocr_file(std::string file, TessPtr ptr, bool HOCR);
RcppExport SEXP _tesseract_ocr_file(SEXP fileSEXP, SEXP ptrSEXP, SEXP HOCRSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< TessPtr >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< bool >::type HOCR(HOCRSEXP);
    rcpp_result_gen = Rcpp::wrap(ocr_file(file, ptr, HOCR));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tesseract_tesseract_config", (DL_FUNC) &_tesseract_tesseract_config, 0},
    {"_tesseract_tesseract_engine_internal", (DL_FUNC) &_tesseract_tesseract_engine_internal, 3},
    {"_tesseract_tesseract_engine_set_variable", (DL_FUNC) &_tesseract_tesseract_engine_set_variable, 3},
    {"_tesseract_engine_info_internal", (DL_FUNC) &_tesseract_engine_info_internal, 1},
    {"_tesseract_ocr_raw", (DL_FUNC) &_tesseract_ocr_raw, 3},
    {"_tesseract_ocr_file", (DL_FUNC) &_tesseract_ocr_file, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_tesseract(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
