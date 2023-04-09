/* This program prints details of the students and displays them */

#include <stdio.h>

int main(){
    int roll_no,age;
    scanf("%d%d\n",&roll_no,&age);
    printf("Roll no. :%d\n",roll_no);
    printf("Age:%d\n",age);
    char gender;
    scanf("%c",&gender);
    printf("Gender:%c\n",gender);
    float marks;
    scanf("%f\n",&marks);
    printf("Marks:%f",marks);
}