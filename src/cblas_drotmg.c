/*
 * cblas_drotmg.c
 *
 * The program is a C interface to drotmg.
 *
 * Written by Keita Teranishi.  2/11/1998
 *
 */
#include <R_ext/BLAS.h>
#include "cblas.h"
void cblas_drotmg(double *d1, double *d2, double *b1, const double b2,
                  double *p) {
  F77_NAME(drotmg)(d1, d2, b1, &b2, p);
}
