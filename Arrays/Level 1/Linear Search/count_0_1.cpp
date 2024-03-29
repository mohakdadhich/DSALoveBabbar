#include <bits/stdc++.h>
using namespace std;
void countZeroOne(int a[], int size){
    int zeroCount = 0, oneCount = 0;
    for(int i=0; i<size; i++){
        if(a[i]==0)
            zeroCount ++;
        if(a[i]==1)
            oneCount ++;            
    }
    cout<<"ZeroCount "<<zeroCount<<" and OneCount "<<oneCount<<endl;
}
int main(){
    int arr[] = {0,0,0,1,1,0,1,0,1,0,1,0,1,1,1};
    int n = 15;
    // cout<<sizeof(arr);
    countZeroOne(arr, n);
    return 0;
}