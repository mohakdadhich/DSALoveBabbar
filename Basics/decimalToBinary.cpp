#include <bits/stdc++.h>
using namespace std;
int decimaltoBinary1(int n){
    // Division method
    int ans = 0, i = 0;
    while (n>0)
    {   
        int bit = n%2;
        // cout<<bit<<endl;
        ans = bit*pow(10,i) + ans;
        n/=2;
        i++;
    }
    return ans;
    
}
int decimaltoBinary2(int n){
    int bit, ans = 0, i = 0;
    while (n>0)
    {
        bit = n & 1;
        n = n>>1;
        ans = bit*pow(10,i) + ans;
        i++;
    }
    return ans;
}
int main(){
    cout<<"Decimal to binary"<<endl;
    cout<<"Division method"<<endl;
    /*Divide no by 2 store remainder, now read remainder from bottom to top*/
    int decimal = 10;
    int binary = decimaltoBinary1(decimal);
    cout<<binary<<endl;
    cout<<decimaltoBinary2(decimal);
    return 0;
}