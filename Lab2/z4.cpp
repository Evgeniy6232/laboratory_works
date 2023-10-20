#include <stdio.h>

int main() {
    int num, sumo = 0, sump = 0;
    
    for (int i = 0; i < 8; i++) {
        scanf("%d", &num);
        if (num > 0) {
            sump += 1;
        } else if (num < 0){
            sumo += 1;
        }
    }       
    
    printf("Количество положительных чисел: %d\n", sump);
    printf("Количество отрицательных чисел: %d\n", sumo);
}