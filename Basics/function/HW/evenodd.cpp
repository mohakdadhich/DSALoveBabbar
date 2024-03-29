#include <bits/stdc++.h>
using namespace std;
bool evenOdd(int n){
    if(n%2==0)
        return 1;
    return 0;        
}
// better way use bitwise operator
int main(){
    int n;
    cin>>n;
    if(evenOdd(n))
        cout<<"Even";
    else
        cout<<"Odd";
    return 0;
}