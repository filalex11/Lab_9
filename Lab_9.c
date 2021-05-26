#ifndef LAB_9_C
#define LAB_9_C
#include "functions.h"
#include <stdlib.h>
#include <string.h>
double* find_derivative (int n, double *coefs) {
	double *res = (double*) malloc ((n + 1) * sizeof (double));
	memcpy (res, coefs, (n + 1) * sizeof (double));
	int j = 0, i = 0;
	int deg = n / 2;
	for (i = 0; i < deg; ++i) {
		for (j = 0; j < n; j++) {
			res[j] *= n - j;	
		}
		res[j] = 0;
		--n;
	}
	return res;
}
#endif
