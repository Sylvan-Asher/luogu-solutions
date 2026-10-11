#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, v;
    cin >> s >> v;

    int t = (s + v - 1) / v + 10;

    t %= 1440;

    int time = (480 - t + 1440) % 1440;

    int h = time / 60;
    int m = time % 60;

    printf("%02d:%02d\n", h, m);

    return 0;
}