#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    int n = 10;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Printing after taking input\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nPrinting after doubling\n";
    for(int i=0; i<n; i++){
        cout<<2*arr[i]<<" ";
    }
    return 0;
}