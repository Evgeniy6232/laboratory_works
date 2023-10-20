#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
	
	system("chcp 65001");
	system("CLS");
	
	int arr[20];
	int positiv[20];
	int negativ[20];
	int count_pos = 0;
	int count_neg = 0;
	int count_obneg = 0;
	int count_obpos = 0;
	
	srand( time(NULL) );
	
	for ( int i = 0; i < 20; i++ ) {
		arr[i] = rand() % 21 - 10;
	}	
	
	
	printf("--------------------------------");
	printf("\n Исходные получившиеся числа: |");
	for ( int i = 0; i < 20; i++ ) {
		printf(" %d |", arr[i]);
	}
	
	for ( int i = 0; i < 20; i++ ) {
		
		if ( arr[i] > 0) {
			positiv[count_pos] = arr[i];
			count_pos++;
			count_obpos += 1;

			
		} else if ( arr[i] < 0 ) {
			negativ[count_neg] = arr[i];
			count_neg++;
			count_obneg += 1;
			
		} 	
	}
		
	printf("\n--------------------------------");
	printf("\n Положительные элементы массива: |");
	for (int i = 0; i < count_pos; i++) {
		printf(" %d |", positiv[i]);
		}
	
	printf("\n--------------------------------");
	printf("\n Отрицальтельные элементы массива: |");
	for (int i = 0; i < count_neg; i++) {
		printf(" %d |", negativ[i]);
		
	}
	
	printf("\n--------------------------------");
	printf("\n Общее кол-во положительных чисел: | %d |", count_obpos);
	printf("\n--------------------------------");
	printf("\n Общее кол-во отрицательных чисел: | %d |", count_obneg);
	printf("\n--------------------------------");
	printf("\n--------------------------------");

}

