/*
 * cblas_dscal.c
 *
 * The program is a C interface to dscal.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include <R_ext/BLAS.h>
#include "cblas.h"
void cblas_dscal(const int N, const double alpha, double *X, const int incX) {
#ifdef F77_INT
  F77_INT F77_N = N, F77_incX = incX;
#else
#define F77_N N
#define F77_incX incX
#endif
  F77_NAME(dscal)(&F77_N, &alpha, X, &F77_incX);
}
