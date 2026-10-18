
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T;
    double a[105][3];
    double sum = 0;

    cin >> N >> T;
    double T0 = T;

    for (int i = 1; i <= N; i++) {
        int m, v;
        cin >> m >> v;

        a[i][1] = m;
        a[i][2] = 1.0 * v / m;
    }

    for (int i = 1; i < N; i++) {
        for (int j = 1; j <= N - i; j++) {
            if (a[j][2] < a[j+1][2]) {
                swap(a[j][1], a[j+1][1]);
                swap(a[j][2], a[j+1][2]);
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        if (T0 <= 0) {
            break;
        }

        if (a[i][1] <= T0) {
            sum += a[i][1] * a[i][2];
            T0 -= a[i][1];
        }
        else {
            sum += T0 * a[i][2];
            break;
        }
    }

    printf("%.2f\n", sum);

    return 0;
}
