#include <stdio.h>

int main() {
    int a, b, c, d, in = 0,min;
    
    printf("Ввведите 4 числа: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    
    if (a<b&&a<c&&a<d) in = 1;
    if (b<a&&b<c&&b<d) in = 2;
    if (c<b&&c<a&&c<d) in = 3;
    if (d<b&&d<c&&d<a) in = 4;

    printf("%d",in);
    
} 