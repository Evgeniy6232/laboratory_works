#include <stdio.h>

int main() {
    int a, b, c, d, max2, max1;
    
    printf("Введите 4 любых числа: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a > b && a > c && a > d) {
        max1 = a;
        if (b > c && b > d) max2 = b;
        if (c > d && c > b) max2 = c;
        if (d > c && d > b) max2 = d;

    }
    if (b > a && b > c && b > d) {
        max1 = b;
        if (a > c && a > d) max2 = a;
        if (c > d && c > a) max2 = c;
        if (d > c && d > a) max2 = d;

    }
    if (c > a && c > b && c > d) {
        max1 = c;
        if (b > a && b > d) max2 = b;
        if (a > d && a > b) max2 = a;
        if (d > a && d > b) max2 = d;

    }
    if (d > a && d > b && d > c) {
        max1 = d;
        if (b > c && b > a) max2 = b;
        if (c > a && c > b) max2 = c;
        if (a > c && a > b) max2 = a;

    }


    printf("Два наибольших числа: %d %d", max1, max2);
    
} 