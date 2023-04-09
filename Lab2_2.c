#include <stdio.h>

int main(){
    int basic_salary,dearness_allowance,house_rent;
    scanf("%d",&basic_salary);
    dearness_allowance=(35.0/100.0)*basic_salary;
    house_rent=(15.0/100.0)*basic_salary;
    double gross_salary;
    gross_salary=basic_salary+dearness_allowance+house_rent;
    printf("%.2lf",gross_salary);
}