#include <bits/stdc++.h>
using namespace std;
void findEvenSum(int n){
    int sum = 0;
    for(int i=1; i<=n; i+=2){
        sum+=i;
    }
    cout<<sum;
}
int main(){
    int n;
    cin>>n;
    findEvenSum(n);
    return 0;
}