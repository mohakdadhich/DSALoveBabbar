#include <bits/stdc++.h>
using namespace std;
int minArr(int arr[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min)
            min = arr[i];    
    }
    return min;
}
int main(){
    int a[10] = {1,3,4,6,7,9,10, -1, -20, -10};
    int n = 10;
    cout<<minArr(a, n);
    return 0;
}