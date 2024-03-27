#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    /*for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<< j+1<<" ";
        }
        cout<<endl;
    }*/
    /*for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<< char(j+'A')<<" ";
        }
        cout<<endl;
    }*/
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<< char(j+'A')<<" ";
        }
        for(int k =0;k<i;k++){
            cout<<char('A'+i-k-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}