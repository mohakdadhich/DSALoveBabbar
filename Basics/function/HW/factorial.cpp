#include <bits/stdc++.h>
using namespace std;
void factorial(int n){
    int fact = 1;
    while(n){
        fact*=n;
        n--;
    }
    cout<<fact;
}
int main(){
    factorial(1);
    return 0;
}