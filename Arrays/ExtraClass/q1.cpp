/*
    Move all -ve no to left and +ve to right of array
*/
#include <bits/stdc++.h>
using namespace std;
void shiftNegativeOneSide(int a[], int n){
    int j =0;
    for(int i=0; i<n; i++){
        if(a[i]<0){
            swap(a[i], a[j]);
            j++;
        }
    }
}
int main(){
    int arr[7] = {23, -7, 12, -10, -11, 40, 60};
    int n = 7;
    shiftNegativeOneSide(arr, n);

    // print
    cout<<"Printing array\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}