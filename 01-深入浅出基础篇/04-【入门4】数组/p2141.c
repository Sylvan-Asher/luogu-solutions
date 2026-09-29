#include<stdio.h>
#define MAXN 105
int a[MAXN];
int main(){
    int n,count = 0;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=1;i<=n;i++){
        int found = 0;
        for (int j = 1; j <= n && !found; j++){
            for (int k = j+1;k <= n;k++ ){
                if(a[j]+a[k] == a[i]){
                    found = 1;
                    break;
                }
            }
        }

        if(found){
            count++;
        }
    }
printf("%d\n",count);    
    return 0;
}