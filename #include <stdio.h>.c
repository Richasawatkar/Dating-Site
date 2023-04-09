#include <stdio.h>

int main(){
    FILE *fp;
    char c;
    fp=fopen("/Users/richasawatkar/Desktop/INPUT.text","r");
    if(fp==NULL){
        printf("File could not be opened\n");
    }
    else{
        while((c=getc(fp))!=EOF){
            putchar(c);
        }
    }
    printf("\n");
    fclose(fp);
}