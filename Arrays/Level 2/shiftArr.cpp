#include <bits/stdc++.h>
using namespace std;
void shiftArr(int a[], int n){
    int temp = a[n-1];
    for(int i=n-1; i>0; i--){
        // swap(a[i], a[i-1]);
        a[i] = a[i-1];
    }
    a[0] = temp;
}

void printArr(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[5] = {10,20,30,40,50};
    int n = 5;
    shiftArr(a,n);
    printArr(a,n);
    return 0;
}