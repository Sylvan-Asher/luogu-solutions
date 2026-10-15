#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    // key: 小组最后一个数字
    // value: 以这个数字结尾的各组长度（小根堆）
    map<int, priority_queue<int, vector<int>, greater<int>>> mp;

    for (int x : a) {
        if (!mp[x - 1].empty()) {
            int len = mp[x - 1].top();
            mp[x - 1].pop();
            mp[x].push(len + 1);
        } else {
            mp[x].push(1);
        }
    }

    int ans = n;

    for (auto &p : mp) {
        if (!p.second.empty()) {
            ans = min(ans, p.second.top());
        }
    }

    cout << ans << '\n';

    return 0;
}
