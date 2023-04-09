#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int x,a=++x,b=x++,c=--x,d=x--;
        cin >> x >> a >> b >> c >> d;
        if (x==a){
            cout << a << endl;
        }
        if (x==b){
            cout << b << endl;
        }
        if (x==c){
            cout << c << endl;
        }
        if (x==d){
            cout << d << endl;
        }
    }
}