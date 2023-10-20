#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");

    int year;

	do {
		printf("Введите год: ");
    	scanf("%d", &year);
	} while ((year < 2008));

    switch((year - 2008) % 12) {
        case 0: printf("Год крысы\n"); break;
        case 1: printf("Год коровы\n"); break;
        case 2: printf("Год тигра\n"); break;
        case 3: printf("Год зайца\n"); break;
        case 4: printf("Год дракона\n"); break;
        case 5: printf("Год змеи\n"); break;
        case 6: printf("Год лошади\n"); break;
        case 7: printf("Год овцы\n"); break;
        case 8: printf("Год обезьяны\n"); break;
        case 9: printf("Год петуха\n"); break;
        case 10: printf("Год собаки\n"); break;
        case 11: printf("Год свиньи\n"); break;

    default: 
        printf("Неккореткный год, ошибка!\n");
        break;
    }

}