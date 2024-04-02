#include <bits/stdc++.h>
using namespace std;
int missingNo(vector<int>a){
    int sum = 0;
    int n = a.size();
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    int totalsum = ((n+1)*(n+2))/2;
    return (totalsum - sum);
}
int main(){
    vector<int>v {1,4,3,7,5,6,8};
    cout<<missingNo(v);
    return 0;
}