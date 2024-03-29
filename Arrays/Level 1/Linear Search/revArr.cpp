#include <bits/stdc++.h>
using namespace std;
void printArr(int a[], int n);
void revArr(int a[], int n){
    int s = 0, e = n-1;
    while (s<=e)
    {
        swap(a[s], a[e]);
        s++;
        e--;
    }
    printArr(a, n);
}
void printArr(int a[], int n){
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
int main(){
    int a[5] = {10,20,30,40,50};
    int b[6] = {10,20,30,40,50,60};
    printArr(a, 5);
    revArr(a, 5);
    cout<<"New Arr:\n";
    printArr(b, 6);
    revArr(b, 6);
    return 0;
}