#include <bits/stdc++.h>
using namespace std;
// void pairPrint(int a[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<a[i]<<", "<<a[j]<<endl;
//         }
//     }
// }

void pairPrint1(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<a[i]<<", "<<a[j]<<endl;
        }
    }
}
int main(){
    int a[] = {10,20,30};
    int n = 3;
    // pairPrint(a, n);
    pairPrint1(a, n);
    return 0;
}