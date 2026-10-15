#include <bits/stdc++.h>
using namespace std;

int check_jolly(int a[], int n) {
    int b[1005] = {0};

    for (int i = 0; i < n - 1; i++) {
        int d = abs(a[i] - a[i + 1]);
        if (d >= 1 && d < n) {
            b[d] = 1;
        }
    }

    for (int i = 1; i < n; i++) {
        if (b[i] == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    int a[1005];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (check_jolly(a, n)) {
        printf("Jolly");
    } else {
        printf("Not jolly");
    }

    return 0;
}
