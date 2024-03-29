#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};
    int c[5] = {1,2};
    // int d[2] = {1,2,3,4,5}; // error
    int e[5] = {0};
    int arr[5];
    // for(int i=0; i<5; i++){
    //     cout<<c[i]<<" ";
    // }
    for(int i=0; i<5; i++){
        cout<<"Enter the value of index "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"\nPrinting arr\n";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}