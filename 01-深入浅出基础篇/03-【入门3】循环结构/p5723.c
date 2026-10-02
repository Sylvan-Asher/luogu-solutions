#include <stdio.h>

int main() {
    int L;
    scanf("%d", &L);

    int sum = 0;
    int count = 0;

    for (int n = 2; ; n++) {

        int isPrime = 1;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            if (sum + n > L)
                break;

            printf("%d\n", n);

            sum += n;
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}