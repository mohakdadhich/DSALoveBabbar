#include <bits/stdc++.h>
using namespace std;
int setKBit(int n, int k){
    // int a = pow(2,k-1);
    return (n | 1<<k);
}
int main(){
    int n;
    int k;
    cin>>n>>k;
    cout<<setKBit(n,k);
    return 0;
}