#include <stdio.h>
#include <stdlib.h>

int main() {

    system("chcp 65001");
    system("CLS");

    int arr[16];
    int chet = 0;
    int nchet = 0;
    int itog = 0;

    printf("Введите номер карты: ");

    for (int i = 1; i <= 16; i++) {
        scanf("%d ", &arr[i]);
    }
    
    printf("\n Номер карты ");
    for (int i = 1; i <= 16; i++) {
    	printf("%d", arr[i]);
	}
    

    chet = arr[2] + arr[4] + arr[6] + arr[8] + arr[10] + arr[12] + arr[14] + arr[16];
    nchet = (arr[1] + arr[3] + arr[5] + arr[7] + arr[9] + arr[11] + arr[13] + arr[15]) * 2;

    if (nchet > 9) {
        nchet -= 9;
    } 
    
    itog = chet + nchet;

    if (itog % 10 == 0) {
    	
        printf(" - верен!");
		 
		} else if (itog % 10 != 0) {
			
			printf(" - неверен!");
	}
    
}