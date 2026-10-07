#include <stdio.h>

int abc[26];
int a[150];

int ip(int n);

int main(void) {
    int c;
    int i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        a[i] = c;
        i++;
    }

    for (int j = 0; j < i; j++) {
        if (a[j] >= 'a' && a[j] <= 'z') {
            int n = a[j] - 'a';
            abc[n]++;
        }
    }

    int max = 0;
    int min = 151;
    for (int j = 0; j < 26; j++) {
        if (abc[j] > max) {
            max = abc[j];
        }
        if (abc[j] > 0 && abc[j] < min) {
            min = abc[j];
        }
    }

    int d = max - min;
    if (ip(d)) {
        printf("Lucky Word\n%d\n", d);
    } else {
        printf("No Answer\n0\n");
    }

    return 0;
}

int ip(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
