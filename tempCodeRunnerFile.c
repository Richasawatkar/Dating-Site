#include <stdio.h>
#include <string.h>

int main{
    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    int p=m+n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int c[p];
    strcat(a,b);
    for(int i=0;i<n;i++){
        cout<<c[i];
    }
}