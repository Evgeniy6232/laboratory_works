#include <stdio.h>
#include <stdlib.h>

int main() {
	system("chcp 65001");
	int n, s;
	n = 117; s = 0;
	for (int i = 1; i <= n; i++) {
		s += i;
	}
	
	printf("%d\n", s);	
	
	
}