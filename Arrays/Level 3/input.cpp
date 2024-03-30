#include <bits/stdc++.h>
using namespace std;
int main(){
    int r = 3, c = 4;
    int a[3][4];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"enter element "<<i<<", "<<j<<": ";
            cin>>a[i][j];
        }
    }
    return 0;
}