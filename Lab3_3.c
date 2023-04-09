#include <stdio.h>

int main(){
    char a,b;
    printf("Enter the values for a & b:");
    scanf("%c %c",&a,&b);
    if (a==b){
        printf("1");
    }
    else{
        printf("0");
    }
}