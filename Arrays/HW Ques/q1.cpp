#include <bits/stdc++.h>
using namespace std;
/*int findDuplicate(vector<int>&v){
    int n = v.size()-1;
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
        if(v[i]==v[i+1])
            return v[i];
    }
    return -1;
}*/
// int findDuplicate(vector<int>&v){
//     int n = v.size() -1;
//     int sum = 0, totalSum = n*(n+1)/2;
//     for(int i=0; i<n+1; i++){
//         sum+=v[i];
//     }
//     return (sum - totalSum);
// }

// int findDuplicate(vector<int>v){
//     int ans = -1, n = v.size();
//     for(int i=0; i<n; i++){
//         int index = abs(v[i]);
//         if(v[index]<0)  // already visited
//             ans = index;   
//         v[index] *=-1;  // marking visited
//     }
//     return ans;
// }


// position method
int findDuplicate(vector<int>v){
    
    while (v[0] != v[v[0]])
    {
        swap (v[0], v[v[0]]);
    }
    return v[0];
    
}


int main(){
    vector<int>v{1,2,3,3,4};
    cout<<findDuplicate(v)<<endl;
    cout<<"compied successfully\n";

    return 0;
}