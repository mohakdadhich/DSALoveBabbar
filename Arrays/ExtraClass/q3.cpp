#include <bits/stdc++.h>
using namespace std;
/*void rotate(vector<int>&a, int k){
    int n = a.size();
    vector<int>temp;
    for(int i=n-k; i<n; i++){
        temp.push_back(a[i]);
    }
    for(int i=n-1; i>=k; i--){
        a[i] = a[i-k];
    }
    for(int i=0; i<k; i++){
        a[i] = temp[i];
    }
}*/
void rotate(vector<int>&a, int k){
    int n = a.size();
    vector<int>ans(n);
    for(int i=0; i<n; i++){
        int j = (i+k)%n;
        ans[j] = a[i];
    }
    a = ans;
}
int main(){
    vector<int>v{10,20,30,40,50,60};
    int k = 5;
    rotate(v,k);
    cout<<"Printing after rotating\n";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}