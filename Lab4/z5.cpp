#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0;
    double s = 0.0;

    for(int i = 1; i <= 10; i++) {
        s += pow((0.02 * (double)i + 0.16) * x, i);
    }

    printf("\n %0.3f", s);

    return 0;
}
