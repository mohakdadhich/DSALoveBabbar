#include <bits/stdc++.h>
using namespace std;
// void firstRepeatedElement(int a[], int n){
//     for(int i=0; i<n; i++){
//         // bool isRepeated = 0;
//         for(int j=i+1; j<n; j++){
//             if(a[i]==a[j]){
//                 // isRepeated = 1;
//                 cout<<a[i]<<" at index "<<i+1;
//                 return;
//             }
//         }
//     }
//     cout<<-1;
// }
        // HASHING
void firstRepeatedElement(int a[], int n){
    unordered_map<int,int>hash;
    for(int i=0; i<n; i++){
        hash[a[i]]++;
    }
    for(int i=0; i<n; i++){
        if(hash[a[i]]>1){
            cout<<a[i]<<"\t"<<i+1;
            break;
        }
    }
}

int main(){
    int a[] = {1,5,3,4,3,5,6};
    int n = 7;
    firstRepeatedElement(a,n);
    return 0;
}