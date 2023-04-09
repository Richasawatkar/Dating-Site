#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    ((a<c) && (a<b)) ? printf("The smallest number is %d",a) : printf(" ");
    ((b<a) && (b<c)) ? printf("The smallest number is %d",b) : printf(" ");
    ((c<a) && (c<b)) ? printf("The smallest number is %d",c) : printf(" ");
}
