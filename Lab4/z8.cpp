#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	system("chcp 65001");
	float n = 12; 
	float p = 1;
	
	for(float i = 2; i <= n; i += 2) {
		p *= i;
	}
	
	printf("\n %1.0f", p);
}