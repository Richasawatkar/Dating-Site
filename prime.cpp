#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int d=2;
    bool divided=false;
    while (d<n){
        if (n%d==0){
            cout << n << " is not a prime number " << endl;
            divided=true;
        }
        d=d+1;
    }
    if (!divided){
        cout << n << " is a prime number " << endl;
    }
} 