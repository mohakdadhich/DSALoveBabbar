#include <bits/stdc++.h>
using namespace std;
int revInt(int n){
    if(n <= INT_MIN || n > INT_MAX){
        return 0;
    }
    int ans = 0;
    bool isneg = false;
    if(n<0){
        isneg = true;
        n = -n;}
    
    while (n)
    {   if (ans >INT_MAX/10)
            return 0;
        int digit = n%10;
        ans = ans*10 + digit;
        n/=10;
    }
    return isneg ? -ans : ans;   
    
}
int main(){
    int n;
    cin>>n;
    cout<<revInt(n);
    return 0;
}