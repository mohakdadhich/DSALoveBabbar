#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 8;
    int n = num/2;
    for(int i=0; i<n; i++){
        // inverted pyramid 1
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        // full pyramid 1
        for(int s=0; s<2*(i)+1; s++){
            cout<<"  ";
        }
        // inverted pyramid 2
        for(int k=0; k<n-i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        // inverted pyramid 1
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        // full pyramid 1
        for(int s=0; s<2*(n-i)-1; s++){
            cout<<"  ";
        }
        // inverted pyramid 2
        for(int k=0; k<i+1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}