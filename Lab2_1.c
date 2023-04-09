#include <stdio.h>

int main(){
    int quiz,exam,assignment,project;
    scanf("%d %d %d %d",&quiz,&exam,&assignment,&project);
    double per;
    per=((quiz+exam+assignment+project)/150.0)*100;
    printf("%.2lf",per);
    double pointer;
    pointer=(per/10.0);
    printf(" %.1lf",pointer);
}