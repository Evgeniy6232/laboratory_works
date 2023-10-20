#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	system("chcp 65001");
	int N;
	double s = 0;
	printf("Введите число N: ");
	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++) {
		s += tan(i * 2);
	}
	
	printf("\n %0.0f", s);
	
}