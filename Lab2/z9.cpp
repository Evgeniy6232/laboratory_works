#include <stdio.h>

int main() { 
    int k, m, n, in = 0, min, max;
    
    printf("Введите три любых числа: ");
    scanf("%d %d %d", &k, &m, &n);
    
    if (k < m && k < n) min = k;
    if (m < k && m < n) min = m;
    if (n < m && n < k) min = n;
    if (k > m && k > n) max = k;
    if (m > k && m > n) max = m;
    if (n > m && n > k) max = n;
    if (k > m && k > n && m < k && m < n) m = max, k = min;
    if (k > m && k > n && n < k && n < m) n = max, k = min;
    if (m > k && m > n && k < m && k < n) k = max, m = min;
    if (m > m && m > n && n < k && n < m) n = max, m = min;
    if (n > m && n > k && m < k && m < n) m = max, n = min;
    if (n > m && n > k && k < n && k < m) k = max, n = min;

    printf("%d %d", min, max);
    
} // не решается 