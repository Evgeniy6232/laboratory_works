#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	system("chcp 65001");
	double n = 1.9;
	double s = 0;
	
	for (double i = 0.1; i <= n; i += 0.2){
		s += log(i);
	}
	printf("\n %1.3f", s);
}