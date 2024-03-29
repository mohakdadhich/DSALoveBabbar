#include <bits/stdc++.h>
using namespace std;
void findSum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<sum;
}
int main(){
    int n;
    cin>>n;
    findSum(n);
    return 0;
}