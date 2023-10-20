#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	system("chcp 65001");
	int N;
	double x;
	double s = 1.0;
	double f = 1.0;

	printf("Введите число x: ");
	scanf("%lf", &x);	

	printf("Введите число N: ");
	scanf("%d", &N);
		
	if (N <= 0) {
		printf("Ошибка! Число должно быть положительным, введите еще раз: ");
		return 0;
	}
	
	for (int i = 1; i <= N; i++) {
		f *= i;
		s += pow(x, i) / f;
	}
	
	printf("\n %0.2f", s);
}