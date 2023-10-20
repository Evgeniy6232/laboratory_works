#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, z, t;
	z = 1; t = 2; y = tan(t)+z;
	x = (8 * pow(z, 2) + 1)/(y * exp(t) + pow(t, 2));
	printf("\n %4.2f", x);
}