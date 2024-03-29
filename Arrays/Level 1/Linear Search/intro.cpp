#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5}, n = 5, k;
    bool flag = 0;
    cin>>k;
    for(int i=0; i<n;i++){
        if(a[i]==k){
            flag = 1;
            break;
        }
    }
    if(flag)
        cout<<"Found\n";
    else
        cout<<"Not-Found\n";

    return 0;
}