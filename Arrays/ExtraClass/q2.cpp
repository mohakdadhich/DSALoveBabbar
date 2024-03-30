#include <bits/stdc++.h>
using namespace std;
void sortColor(vector<int>&num){
    int n = num.size();
    int s = 0, e = n-1;
    int i =0;
    while (i<=e)
    {
        if(num[i]==0){
            swap(num[i], num[s]);
            i++; s++;
        }
        else if(num[i]==2){
            swap(num[i], num[e]);
            e--;
        }
        else{
            i++;
        }
    }
    
}
int main(){
    vector<int>a{1,0,2,2,1,0,1,0};
    sortColor(a);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;
}