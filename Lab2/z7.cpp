#include <stdio.h>

int main(){
    int k, m, n, in = 0, min, sred, max;
    
    printf("Введите 3 числа: ");
    scanf("%d %d %d", &k, &m, &n);
    
	if (k > m && k > n) max = k;
    if (m > k && m > n) max = m;
    if (n > m && n > k) max = n;  
    
	if (k < m && k < n) min = k;
    if (m < k && m < n) min = m;
    if (n < m && n < k) min = n;

    if (k < max && k > min) sred = k;
    if (m < max && m > min) sred = m;
    if (n < max && n > min) sred = n;

    printf("%d %d %d", min, sred, max);
    
} 