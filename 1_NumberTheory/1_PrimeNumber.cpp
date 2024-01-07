#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;

    for(int i=3; i<=sqrt(n); i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    int result = prime(n);
    cout << result << endl; //1=prime, 0=not prime

    return 0;
}