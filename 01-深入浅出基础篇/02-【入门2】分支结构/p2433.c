#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    const double pi = 3.141593;

    if (T == 1) {
        printf("I love Luogu!\n");
    }

    else if (T == 2) {
        printf("6 4\n");
    }

    else if (T == 3) {
        printf("3\n");
        printf("12\n");
        printf("2\n");
    }

    else if (T == 4) {
        printf("%g\n", 500.0 / 3);
    }

    else if (T == 5) {
        printf("%d\n", (220 + 260) / (12 + 20));
    }

    else if (T == 6) {
        printf("%g\n", sqrt(6 * 6 + 9 * 9));
    }

    else if (T == 7) {
        printf("110\n");
        printf("90\n");
        printf("0\n");
    }

    else if (T == 8) {
        printf("%g\n", 2 * pi * 5);
        printf("%g\n", pi * 5 * 5);
        printf("%g\n", 4.0 / 3 * pi * 5 * 5 * 5);
    }

    else if (T == 9) {
        printf("22\n");
    }

    else if (T == 10) {
        printf("9\n");
    }

    else if (T == 11) {
        printf("%g\n", 100.0 / 3);
    }

    else if (T == 12) {
        printf("13\n");
        printf("R\n");
    }

    else if (T == 13) {
        printf("16\n");
    }

    else if (T == 14) {
        printf("50\n");
    }

    return 0;
}