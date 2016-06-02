#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void roots(double a, double b, double c, double *root1, double *root2, int *count)
{
	double x1, x2, d;

	if (a == 0) {
		*count = 0;
		return;
	}

	d = b * b - 4 * a * c;
	
	if (d < 0) {
		*count = 0;
		return;
	}

	x1 = (-b - sqrt(d)) / (2 * a);
	x2 = (-b + sqrt(d)) / (2 * a);
	
	*root1 = x1;
	*root2 = x2;

	if (d == 0) {
		*count = 1;
		return;
	}
	else
		if (d > 0) {
			*count = 2;
		}
}