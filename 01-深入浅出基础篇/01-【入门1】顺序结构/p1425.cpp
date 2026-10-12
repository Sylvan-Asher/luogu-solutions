#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int h,m;
    h = c - a;
    m = d - b;
    if (m < 0){
        m = m + 60;
        h--;
    }
    cout << h << " " << m << '\n';
    return 0;
}