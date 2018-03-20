#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP JumpTest_lp(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP JumpTest_lp2(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP JumpTest_pv2(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP JumpTest_pvc(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP JumpTest_pvc0(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
	{ "JumpTest_lp",   (DL_FUNC)&JumpTest_lp,   11 },
	{ "JumpTest_lp2",  (DL_FUNC)&JumpTest_lp2,  10 },
	{ "JumpTest_pv2",  (DL_FUNC)&JumpTest_pv2,  13 },
	{ "JumpTest_pvc",  (DL_FUNC)&JumpTest_pvc,  10 },
	{ "JumpTest_pvc0", (DL_FUNC)&JumpTest_pvc0,  9 },
	{ NULL, NULL, 0 }
};

void R_init_JumpTest(DllInfo *dll) {
	R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
	R_useDynamicSymbols(dll, FALSE);
}
