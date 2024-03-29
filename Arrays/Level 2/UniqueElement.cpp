#include <bits/stdc++.h>
using namespace std;
int uniqueElement(int a[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^a[i];
    }
    return ans;
}
int main(){
    int arr[] = {2,10,11,13,10,2,16,13,16};
    int n = 9;
    cout<<uniqueElement(arr, n);
    return 0;
}