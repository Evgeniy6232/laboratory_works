#include <stdlib.h>
#include <stdio.h>

int main() {
	system("chcp 65001");
	int c;
	
	do {
		printf("Введите число: ");
		scanf("\n %d", &c);
	} while ((c > 9) || (c < -9));

	switch(c) {
		
		case 9: printf("Плюс девять"); break;
		case 8: printf("Плюс восемь"); break;
		case 7: printf("Плюс семь"); break;
		case 6: printf("Плюс шесть"); break;
		case 5: printf("Плюс пять"); break;
		case 4: printf("Плюс четыре"); break;
		case 3: printf("Плюс три"); break;
		case 2: printf("Плюс два"); break;
		case 1: printf("Плюс один"); break;
		case 0: printf("ноль"); break;
		case -1: printf("Минус один"); break;
		case -2: printf("Минус два"); break;
		case -3: printf("Минус три"); break;
		case -4: printf("Минус четыре"); break;
		case -5: printf("Минус пять"); break;
		case -6: printf("Минус шесть"); break;
		case -7: printf("Минус семь"); break;
		case -8: printf("Минус восемь"); break;
		case -9: printf("Минус девять"); break;
	}
		
	
}