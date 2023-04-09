#include <stdio.h>

#include <math.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double x1,x2;
    double D=(pow(b,2)-4*a*c);
    x1=(-b+sqrt(D))/2.0;
    x2=(-b-sqrt(D))/2.0;
    printf("%.1lf",x1);
    printf(" %.1lf",x2);
}