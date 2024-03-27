#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Square pattern\n";
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"rectangle pattern\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    int r = 5, c = 4;
    cout<<"Hollow rectangle\n";
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            if(j==0 || j==c-1 || i == 0 || i == r-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
            cout<<endl;
    }
    return 0;
}