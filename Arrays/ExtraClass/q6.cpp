#include <bits/stdc++.h>
using namespace std;
vector<int> rowAndMaxOne(vector<vector<int>>mat){
    vector<int>ans;
    int n = mat.size();
    int oneCount = 0, rowNo = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j< mat[i].size(); j++){
            sum+=mat[i][j];
        }
        if(sum>oneCount){
            oneCount = sum;
            rowNo = i;
        }
    }
    ans.push_back(rowNo);
    ans.push_back(oneCount);
    return ans;
}
int main(){
    vector<vector<int>> arr = {
        {1,0,0,0}, {0,1,1,0}, {0,1,1,0}, {1,1,1,0}, {0,0,1,0}
    };
    vector<int> ans = rowAndMaxOne(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}