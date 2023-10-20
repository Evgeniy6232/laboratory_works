#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6;
    int sum, proiz, raz;

    printf("Введите 6 чисел: ");
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);

    sum = n1 + n2 + n3 + n4 + n5 + n6;
    proiz = n1 * n2 * n3 * n4 * n5 * n6;

    if (sum > proiz)
        printf("Сумма больше произведения на: %d", (sum - proiz));
    else
        printf("Сумма меньше произведения на: %d", (proiz - sum));

    return 0;
}