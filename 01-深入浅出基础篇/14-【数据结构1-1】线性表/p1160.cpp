
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    list<int> a;
    list<int>::iterator pos[100005];
    bool removed[100005] = {false};

    // 先让 1 号同学入队
    a.push_back(1);
    pos[1] = a.begin();

    // 安排 2~N 号同学
    for (int i = 2; i <= N; i++) {
        int m, n;
        cin >> m >> n;

        if (n == 0) {
            // 插在 m 号同学左边
            pos[i] = a.insert(pos[m], i);
        }

        if (n == 1) {
            // 插在 m 号同学右边
            pos[i] = a.insert(next(pos[m]), i);
        }
    }

    int M;
    cin >> M;

    // 删除指定同学
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;

        if (!removed[k]) {
            a.erase(pos[k]);
            removed[k] = true;
        }
    }

    // 输出剩下的同学
    for (int x : a) {
        cout << x << " ";
    }

    return 0;
}
