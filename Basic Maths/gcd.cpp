#include <iostream>
using namespace std;

int gcd(int a , int b){
    if(a == 0)
    return b;
    if(b == 0)
    return a;

    while(a != b){
        if(a>b){
            a = a-b;
        }
        if(b>a){
            b = b - a;
        }
    }
    return a;
}

int main(){
    int a,b;
    cout << "Enter two numbers"<<endl;
    cin>>a>>b;
    int res = gcd(a,b);
    cout<< " Gcd of "<< a << " and " << b << " = "<<res<<endl;
}