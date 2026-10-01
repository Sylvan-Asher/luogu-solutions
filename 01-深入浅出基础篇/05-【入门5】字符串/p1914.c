#include<stdio.h>
char s[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
int main(){
    int c, n;
    scanf("%d",&n);
    getchar();
    while((c = getchar()) != EOF){
        for (int i=0; i<26; i++){
            if(s[i] == c){
                putchar(s[i+n]);
                break;
            }
        }
    }
    return 0;
}