#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearSearch(int a[], int n, int k){
    for(int i=0; i<n; i++){
        if(a[i]==k)
            return true;
    }
    return false;
}
int main(){
    int arr[5] = {2,4,6,8,10};
    int n = 5, k = 10;
    printArr(arr, n);

    if(linearSearch(arr, n, k))
        cout<<"Found\n";
    else
        cout<<"Not found\n";
    return 0;
}