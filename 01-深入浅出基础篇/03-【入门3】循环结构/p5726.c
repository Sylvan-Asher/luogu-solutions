#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    int max = -1;
    int min = 101;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        sum += x;

        if (x > max)
            max = x;

        if (x < min)
            min = x;
    }

    double ans = (double)(sum - max - min) / (n - 2);

    printf("%.2f\n", ans);

    return 0;
}