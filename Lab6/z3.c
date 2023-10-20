#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    system("chcp 65001");
    system("CLS");

    srand(time(0));  
    
    const int N = 20;  
    double array[N];  
    
    for (int i = 0; i < N; i++) {
        array[i] = (double)rand() / RAND_MAX * 10.0;
    }
    
    printf("Массив:\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");
    
    printf("Элементы, большие своих соседей:\n");
    for (int i = 1; i < N - 1; i++) {
        if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
            printf("%.2f\n", array[i]);
        }
    }
    
}
