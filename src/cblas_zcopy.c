/*
 * cblas_zcopy.c
 *
 * The program is a C interface to zcopy.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include <R_ext/BLAS.h>
#include "cblas.h"
void cblas_zcopy(const int N, const void *X, const int incX, void *Y,
                 const int incY) {
#ifdef F77_INT
  F77_INT F77_N = N, F77_incX = incX, F77_incY = incY;
#else
#define F77_N N
#define F77_incX incX
#define F77_incY incY
#endif
  F77_NAME(zcopy)(&F77_N, X, &F77_incX, Y, &F77_incY);
}
