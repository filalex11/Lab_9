#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
/*
	Ввести степень n и коэффициенты многочлена степени n. Вывести коэффициенты многочлена, являющегося производной порядка n / 2.
*/
int main () {
	int n = 0, i = 0;
	printf ("Enter a degree of polynomial:\n");
	scanf ("%d", &n);
	if (n < 0) {
		printf ("A degree of polynomial MUST NOT BE NEGATIVE!\n");
		return 1;
	}
	printf ("Enter coefficients:\n");
	double *coefs = (double*) malloc ((n + 1) * sizeof (double));
	for (i = 0; i <= n; i++) {
		scanf ("%lf", (coefs + i));
	}
	double *res = find_derivative (n, coefs);
	printf ("Coefficients of the derivative of a polynomial of order %d\n", n / 2);
	for (i = 0; i <= n - n / 2; i++) {
		printf ("%lf * x^%d\n", res[i], (n / 2 + 1) - i);
	}
	free (coefs);
	free (res);
	return 0;
}
