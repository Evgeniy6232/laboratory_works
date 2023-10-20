#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	system("chcp 65001");
	int n = 25;
	float s = 0;
	
	for (int i = 1; i <= n; i++) {
		s += sin(i);
	}
	
	printf("%1.3f", s);
	
}
