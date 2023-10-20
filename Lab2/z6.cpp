#include <stdio.h>

int main(){
    int a, b, c, d, min, max, res;
    
    printf("Введите 4 любых числа: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
   	if (a>b&&a>c&&a>d) max = a;
    if (b>a&&b>c&&b>d) max = b;
    if (c>b&&c>a&&c>d) max = c;
    if (d>b&&d>c&&d>a) max = d; 
    
    if (a<b&&a<c&&a<d) min = a;
    if (b<a&&b<c&&b<d) min = b;
    if (c<b&&c<a&&c<d) min = c;
    if (d<b&&d<c&&d<a) min = d;
    
    res = max - min;
    printf("Два наибольших числа: ", "%d", res);
    
} 