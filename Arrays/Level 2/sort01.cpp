#include <bits/stdc++.h>
using namespace std;
void sortZeroOne(int a[], int n){
    int zeroCount = 0, oneCount = 0;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            zeroCount++;
        }
        if(a[i]==1){
            oneCount++;
        }
    }
    int i=0;
    while (zeroCount)
    {
        a[i] = 0;
        zeroCount--;
        i++;
    }
    while (oneCount)
    {
        a[i] = 1;
        oneCount--;
        i++;
    }
}

void sortZeroOne1(int a[], int n){
    int s = 0, e = n-1;
    while (s<e)
    {
        if(a[s]==0)
            s++;
        if(a[e]==1)
            e--;
        if(a[s]==1 && a[e]==0)
            swap(a[s], a[e]);
    }
    
}
void printArr(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
     int a[] = {0,1,0,1,1,0,0,0,0};
     int n = 9;
     sortZeroOne1(a, n);
     printArr(a,n);
    return 0;
}