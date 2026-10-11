#include <bits/stdc++.h>
using namespace std;

bool calculate(double money, double rate,
               double payment, int m) {
    for (int i = 1; i <= m; i++) {
        money = money * (1 + rate) - payment;
    }

    return money > 0;
}

int main() {
    double money, payment;
    int m;

    cin >> money >> payment >> m;

    double rate1 = 0, rate2 = 3;

    for (int i = 0; i < 100; i++) {
        double rate0 = (rate1 + rate2) / 2;

        if (calculate(money, rate0, payment, m)) {
            rate2 = rate0;
        }
        else {
            rate1 = rate0;
        }
    }

    double ans = (rate1 + rate2) / 2 * 100;

    printf("%.1f\n", ans);

    return 0;
}