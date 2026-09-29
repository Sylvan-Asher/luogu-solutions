#include <iostream>
using namespace std;

int main() {
    int n;
    int a[1000];
    int cnt = 0;

    cin >> n;

    while (n != 1) {
        a[cnt] = n;
        cnt++;

        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
    }

    a[cnt] = 1;

    for (int i = cnt; i >= 0; i--)
        cout << a[i] << ' ';

    return 0;
}