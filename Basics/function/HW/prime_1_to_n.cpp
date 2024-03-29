#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2)
        return false;
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void printPrime(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i))
            cout<<i<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    printPrime(n);
    return 0;
}