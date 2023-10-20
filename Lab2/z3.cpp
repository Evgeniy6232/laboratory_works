#include <stdlib.h>
#include <stdio.h>

int main() {
	system("chcp 65001");
	int n1, n2, n3, n4;
	
	printf("Введите 4 любых числа: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	if (n1<0)
		n1 = 0;
		
	if (n2<0)
		n2 = 0;
		
	if (n3<0)
		n3 = 0;
		
	if (n4<0)
		n4 = 0;
		
	printf("%d %d %d %d", n1, n2, n3, n4);
}