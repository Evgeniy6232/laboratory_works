#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	system("chcp 65001");
	system("CLS");
		
	int n;
	int conclusion = 0;
	int counter = 0;
	
	printf("--------------------------------");
	printf("\n Введите значение n: ");
	scanf("%d", &n);
	printf("--------------------------------");
	printf("\n Числа удовлетворяющие условию: |");
	
	for (int i = 2; i <= n; i++) {
		if (i % 2 == 0) {
			
			conclusion = i;
			counter += 1;
			printf(" %d |", conclusion);
					
			}	
		
		}	
		
		printf("\n--------------------------------");
		printf("\n Количество таких числе: | %d |", counter);
}