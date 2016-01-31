
#ifndef NMATH_H
#define NMATH_H

#include <math.h>
#include <float.h>


// Some defines from R
#define ML_NEGINF	((-1.0) / 0.0)
#define ML_POSINF	(( 1.0) / 0.0)
#define FALSE 0
#define LDOUBLE double
#define NULL 0
#define M_LN_SQRT_2PI	0.918938533204672741780329736406	/* log(sqrt(2*pi)) */
#define M_LN_SQRT_PId2	0.225791352644727432363097614947	/* log(sqrt(pi/2)) */
#define M_SQRT_32	5.656854249492380195206754896838	/* sqrt(32) */
#define M_1_SQRT_2PI	0.398942280401432677939946059934	/* 1/sqrt(2pi) */
#define ML_NAN NAN
#define M_2PI		6.283185307179586476925286766559	
#define pnorm pnorm5
#define dnorm dnorm4

#define R_FINITE isfinite

#define expm1(x) (exp(1)-1)
#define log1p(x) (log(x+1))
#define fmax2(x, y) fmax(x, y)

#define MATHLIB_WARNING(...)  {}
#endif
