#include <bits/stdc++.h>
using namespace std ;
int a[65] ; 
int timelong(int a[], int n){
    int sum1 = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n) ;
    for (int i = 0; i < n; i++){
        sum1 = sum1 + a[i];
        a[i+1]=a[i+1]-a[i];        
    }
    fill(a, a + 100, 0);
    return sum1;    
}

int main(){
    int s1, s2, s3, s4 ;
    int sum = 0 ;
    cin >> s1 >> s2 >> s3 >> s4 ;
    sum = (timelong(a,s1))+(timelong(a,s2))+(timelong(a,s3))+(timelong(a,s4)) ;
    cout << sum << endl;
    return 0;
}