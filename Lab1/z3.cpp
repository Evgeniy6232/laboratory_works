#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, z, t;
	t = 1; z = 3; y = sin(t);
	x = 4 * pow(y,2)/(4 * y * exp(z) - 2 * pow(t, 3));
	printf("\n %4.2f", x);
}