#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, reversed_num;
        cin >> n;
        reversed_num=0;
        while (n!=0){
            int digit;
            digit=n%10;
            reversed_num=reversed_num*10+digit;
            cout << reversed_num << endl;
            n/=10;
        }
    }
}