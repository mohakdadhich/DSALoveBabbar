#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int n = num/2;
    for(int i=0; i<n; i++){
        for(int s = 0; s<n-i-1; s++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        for(int s =0; s<i; s++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}