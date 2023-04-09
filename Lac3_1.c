#include <stdio.h>
#include <math.h>

int main(){
    int t1,t2,t3,a,b,c,d;
    printf("Enter the values of a,b & c:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    t1=(--a+b++)/(c--*d++);
    t2=pow(t1,3);
    t3=sqrt(t2/t1);
    printf("t1=%d",t1);
    printf(" t2=%d",t2);
    printf(" t3=%d",t3);
    printf(" a=%d",a);
    printf(" b=%d",b);
    printf(" c=%d",c);
    printf(" d=%d",d);
}