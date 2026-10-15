#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "No!!!" << endl;
        return 0;
    }

    bool found = false;

    for (int i = 100; i < 1000; i++) {
        if (i * b % a != 0 || i * c % a != 0)
            continue;

        int x = i;
        int y = i * b / a;
        int z = i * c / a;

        if (y >= 100 && y < 1000 &&
            z >= 100 && z < 1000) {

            int num[3] = {x, y, z};
            int used[10] = {0};
            bool ok = true;

            for (int j = 0; j < 3; j++) {
                int t = num[j];

                while (t > 0) {
                    int d = t % 10;

                    if (d == 0 || used[d] == 1) {
                        ok = false;
                    }

                    used[d] = 1;
                    t /= 10;
                }
            }

            if (ok) {
                cout << x << " " << y << " " << z << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No!!!" << endl;
    }

    return 0;
}
