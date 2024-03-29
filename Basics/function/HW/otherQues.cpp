#include <bits/stdc++.h>
using namespace std;
void km2Mile(float n){
    cout<<(n/1.609)<<endl;
}
void c2F(float c){
    float farhenite = (c*9/5) + 32;
    cout<<farhenite<<endl;
}

void countSetBits1(int n){
    int count = 0;
    while (n)
    {
        if(n&1)
            count++;
        n>>=1;    
    }
    cout<<count<<endl;
    
}

void countSetBits2(int n){       // better
    int count = 0;
    while (n)
    {
        n = n&(n-1);
        count++;
    }
    cout<<count<<endl;
}

void isEven(int n){
    if(n&1){
        cout<<"Odd\n";
        return;}
    cout<<"Even\n";
}

int main(){
    km2Mile(1);
    c2F(37);
    countSetBits2(5);
    isEven(11);
    isEven(10);
    return 0;
}