
{
    "workbench.colorTheme": "Default Dark Modern",
    "security.workspace.trust.untrustedFiles": "open"
}
#include <stdlib.h>
#include <stdio.h>

int main() {
	system("chcp 65001");
	int m;

	printf("--------------------------------");
	printf("\nВведите номер месяца: ");
	scanf("%d", &m);

	printf("--------------------------------");
	printf("\nНомер квартала месяца %d: ", m);
	switch(m) {
		case 1 ... 3:
			printf("1");
			break;

		case 4 ... 6:
			printf("2");
			break;

		case 7 ... 9:
			printf("3");
			break;

		case 10 ... 12:
			printf("4");
			break;

		default:
			printf("\n Error\n");
	}

	printf("\nВремя года месяца %d: ", m);
	switch(m) {
		case 12: case 1: case 2:
			printf("Зима");
			break;

		case 3: case 4: case 5:
			printf("Весна");
			break;

		case 6: case 7: case 8:
			printf("Лето");
			break;

		case 9: case 10: case 11:
			printf("Осень");
			break;

		default:
			printf("\n Error\n");

	}
}