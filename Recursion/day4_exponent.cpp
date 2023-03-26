#include <iostream>
using namespace std;

int power(int a, int b){
    if(b==1){
        return a;
    }
    if(b == 0){
        return 1;
    }
    // if(a == 0){
    //     return 0;
    // }

    int ans = power(a,b/2);
    //even
    if(b%2 == 0){
        return ans*ans;
    }
    //odd
    else{
        return a * ans * ans;
    }
}

int main(){
    int a,b;
    cout << "Enter number and power" << endl;
    cin >> a >> b;
    int ans = power(a,b);
    cout << "Answer is " << ans << endl;
    return 0;
}