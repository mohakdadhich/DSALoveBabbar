#include <bits/stdc++.h>
using namespace std;
    void wavePrintAMatrix(vector<vector<int>>v){
        int r = v.size();
        int c = v[0].size();
        for(int col=0; col<c; col++){
            if((col&1) == 0){
                for(int row=0; row<r; row++){
                    cout<<v[row][col]<<" ";
                }
            }
            else{
                for(int row=r-1; row>=0; row--){
                    cout<<v[row][col]<<" ";
            }
        }
    }
    }
int main(){
    vector<vector<int>>m = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    wavePrintAMatrix(m);
    return 0;
}