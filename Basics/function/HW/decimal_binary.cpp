#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n){
    int bit, ans = 0, i = 0;
    while (n>0)
    {
        bit = n & 1;
        n = n>>1;
        ans = bit*pow(10,i) + ans;
        i++;
    }
    cout<< ans;
}
// b2d using bitwise
int binaryToDecimal(int n) {
    int ans = 0, i = 1;

    while (n) {
        ans += (n & 1)*i;
        n >>= 1;
        i *= 2;
    }

    return ans;
}

int main(){
    int b = 10;
    // cin>>b;
    cout << "Binary to Decimal: " << binaryToDecimal(b) << endl;
    // cout << "Decimal to Binary: ";
    // decimalToBinary(10);
    return 0;
}
