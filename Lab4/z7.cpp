#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	system("chcp 65001");
	int m;
	float p = 1;
	
	printf("Введите число m: ");
	scanf("%d", &m);
		
	for (int i = 1; i <= m; i++) {
		p *= i;
	}
	
	printf("\n %1.0f", p);
}