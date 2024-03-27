#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    // cout<<"enter n: ";
    // cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            if(j ==0 || j ==i || i == n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        for(int j=n-i; j>0;j--){
            if(j ==1 || j==n-i || i==0)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}