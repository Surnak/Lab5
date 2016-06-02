#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "roots.h"

int main(int argc, char *argv[])
{
	if (argc < 4) {
		fprintf(stderr, "Program: An error has occured!\nERROR: Missing coefficients!\nHint: Check your input value! It must be three coefficients!\n");
		exit(EXIT_FAILURE);
	}

	double a, b, c, x1, x2;
	int count;

	a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);

	roots(a, b, c, &x1, &x2, &count);

	if (count == 0) {
		printf("No roots!\n");
		exit(EXIT_SUCCESS);
	}
	else
		if (count == 1) {
			printf("Roots are equal!\nX = %f\n", x1);
			exit(EXIT_SUCCESS);
		}
		else
			if (count == 2) {
				printf("X1 = %f\nX2 = %f\n", x1, x2);
				exit(EXIT_SUCCESS);
			}
	return EXIT_SUCCESS;
}