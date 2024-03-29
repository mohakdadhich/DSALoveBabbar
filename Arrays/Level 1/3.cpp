#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5], sum = 0;
    int n = 5;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Printing sum\n";
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}