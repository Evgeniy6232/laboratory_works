#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Введите 5 любых чисел: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        if (num > 0) {
            sum += num;
        }
    }

    printf("Сумма положительных чисел: %d\n", sum);
    return 0;
}