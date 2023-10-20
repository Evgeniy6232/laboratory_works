#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	double a = 2.14, b = -4.21, c = 3.25, x = -4.5, xk = -14, h = 0.5, y = 0, xmax = -1000, xmin = 1000;
	while (x != xk) {
		 y = ((a * (x * x) + b * x + c) * (sin(x)));
		 x -= h;	
		 
		 if (y > xmax) {
		 xmax = y;}
		 if (y < xmin) {
		 xmin = y;}
	}
	printf("%1.3f %1.3f", xmin, xmax);
}