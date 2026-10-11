#include <stdio.h>
#include <math.h>

int main() {
    double h, r;
    scanf("%lf %lf", &h, &r);

    double v = 3.14 * r * r * h;
    int n = (int)ceil(20000.0 / v);

    printf("%d\n", n);

    return 0;
}
