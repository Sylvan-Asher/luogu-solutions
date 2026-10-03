#include<stdio.h>
#include<math.h>
double dis(double x1,double y1,double x2,double y2,double x3,double y3){
    double dis;
    dis=sqrt((x2-x1)^2+(y2-y1)^2)+sqrt((x2-x3)^2+(y2-y3)^2)+sqrt((x3-x1)^2+(y3-y1)^2);
    return dis;
}
int main(){
        double x[3], y[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    dis(x1,y1,x2,y2,x3,y3);
    printf("%d/n",dis)
    return 0;
}




//改
#include <stdio.h>
#include <math.h>

double dis(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1)
              + (y2 - y1) * (y2 - y1));
}

int main() {
    double x[3], y[3];

    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf", &x[i], &y[i]);
    }

    double ans;

    ans = dis(x[0], y[0], x[1], y[1])
        + dis(x[1], y[1], x[2], y[2])
        + dis(x[2], y[2], x[0], y[0]);

    printf("%.2f\n", ans);

    return 0;
}


