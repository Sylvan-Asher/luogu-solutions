#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int a[100005];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a, a + N);

    for (int i = 0; i < N; i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }

    cout << '\n';

    return 0;
}
