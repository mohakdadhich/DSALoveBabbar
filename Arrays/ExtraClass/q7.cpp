#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>&v){
    int n = v.size();
    // transpose
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            swap(v[i][j], v[j][i]);
        }
    }
    // reverse the row
    for(int i=0; i<n; i++){
        int s = 0, e = n-1;
        while (s<=e){
            swap(v[i][s], v[i][e]);
            s++;
            e--;
        }
    }
}
int main(){
    vector<vector<int>> v={
        {1,2,3}, {4,5,6}, {7,8,9}
    };
    rotate(v);
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}