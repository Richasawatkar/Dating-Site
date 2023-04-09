#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        string r;
        int j;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'){
                    if(s[i+2]=='a'||s[i+2]=='e'||s[i+2]=='i'||s[i+2]=='o'||s[i+2]=='u'){
                        r[i]=s[i];
                        cout<<r[i];
                    }
                }
            }
            else{
                for(int j=i;j<n;j++){
                    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                        r[]=s[j];
                    }
                }
            }
        }
        
    }
}