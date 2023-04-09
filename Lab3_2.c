#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Enter the sides of the triangle:");
    scanf("%d %d %d",&a,&b,&c);
    int s=((a+b+c)/2.0);
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle using heron's formula:%2.f",area);
}