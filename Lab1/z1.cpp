#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, z, t;
	y = 2; t = 5/(1+y*y); z = 4;
	x = 2 * y + 3 * sinh(t) - z;
	printf("\n %4.2f", x);
	 }