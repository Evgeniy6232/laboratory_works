#include <stdio.h>
#include <stdlib.h>

long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    system("chcp 65001");
    int n;
    printf("Введите число n: ");
    scanf("%d", &n);

    long long C[n + 1];
    for (int i = 0; i <= n; i++) {
        C[i] = factorial(n) / (factorial(i) * factorial(n - i));
    }

    printf("Массив C:\n");
    for (int i = 0; i <= n; i++) {
        printf("%lld ", C[i]);
    }
    printf("\n");

    return 0;
}
