#include <stdio.h>

int main(){
    int S;
    scanf("%d",&S);
    int hour,min,sec;
    hour=(S/3600.0);
    min=(S-(3600*hour))/60.0;
    sec=(S-(3600*hour)-(min*60));
    printf("%d",hour);
    printf(":%d",min);
    printf(":%d",sec);
}