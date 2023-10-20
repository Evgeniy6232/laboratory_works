#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	double e = 0.000001;
	double pi = 0;
	float ch = 1;
	float zn = 1;
	float chislo = 1;
	
	while (abs(chislo) > e) {
		pi += chislo;
		zn += 2;
		ch *= -1;
		chislo = ch/zn;
	}
	pi *= 4;
	
	printf("%1.6f", pi);
}