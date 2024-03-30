#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr(5, vector<int>(10,0));
    // row size--> arr.size();
    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0; j<arr[i].size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // Jagged Array
    vector<vector<int>> brr;
    vector<int>v1(10,1);
    vector<int>v2(5,0);
    vector<int>v3(3,0);
    vector<int>v4(11,6);
    vector<int>v5(20,0);

    brr.push_back(v1);
    brr.push_back(v2);
    brr.push_back(v3);
    brr.push_back(v4);
    brr.push_back(v5);
    cout<<"Jagged arr\n";
    for(int i=0; i<brr.size(); i++){
        for(int j=0; j<brr[i].size(); j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}