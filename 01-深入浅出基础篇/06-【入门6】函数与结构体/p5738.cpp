#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[105][25];
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            cin >> a[i][j];
        }        
    }
    double sum_max = 0;
    for (int i = 0;i < n;i++){
    int max = -100, min = 100, sum = 0;
        for (int j = 0;j < m;j++){
            sum = sum + a[i][j];
            if (a[i][j] < min){
                min = a[i][j];
            }
            if (a[i][j] > max){
                max = a[i][j];
            }
        }
        sum = sum - min - max;
        if (sum > sum_max){
            sum_max = sum ;
        }          
    }
    printf("%.2f\n",sum_max/(m-2));
    return 0;
}