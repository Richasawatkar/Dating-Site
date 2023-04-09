#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the values of the integers:");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b) && (a>c)){
        printf("1");
    }
    else{
        if ((a>b) || (a>c)){
            printf("1");
        }
        else{
            printf("0");
        }
    }
}