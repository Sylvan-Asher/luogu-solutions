#include <stdio.h>
#include <float.h>

int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    float D = A*0.2+B*0.3+C*0.5;
    int E = (int)D;
    printf("%d\n",E);
    return 0;
}
