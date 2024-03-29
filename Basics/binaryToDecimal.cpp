#include <bits/stdc++.h>
using namespace std;
int binarytoDecimal1(int n){
    int decimal = 0, i =0, bit;
    while(n){
        bit = n%10;
        n/=10;
        decimal = bit*pow(2, i++) + decimal;
        // i++;
    }
    return decimal;
}


int main(){
    int binary;
    cout<<"binary to decimal\n";
    cin>>binary;
    cout<<binarytoDecimal1(binary)<<endl;
    return 0;
}