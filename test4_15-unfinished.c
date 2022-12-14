#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
// КР4 - b)15
int main()
{
	// Геометрическая прогрессия
	// q=(2n+1)*y/(2n+3)*x^2
	double epsilon=1.e-5, S=0, y, x;
	int n = 0;
	scanf_s("%lf", &x);
	y = x;
	while(fabs(y) > epsilon) {
		S += y;
		n += 1;
		y = (-1)*(((2*n+1)*y)/((2*n+3)*x*x));
	}
	printf("%lf %i", S, n);
    return 0;
}
