#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	system("chcp 65001");
	int N;
	int s = 0;
	
	printf("Введите число N: ");
	scanf("%d", &N);
	
	if (N <= 0) {
		printf("Ошибка! Число должно быть положительным, введите еще раз: ");
		return 0;
	}
	
	for (int i = 1; i <= N; i++) {
		
		if (i % 2 == 0) {
			s -= i;
		} 	else {
				s += i;
		}
	}
	
	printf("\n %d", s);
	
	return 0;
}


