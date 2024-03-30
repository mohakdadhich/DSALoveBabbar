#include <bits/stdc++.h>
using namespace std;
// main diagonal
void diagonalSum(int a[][3], int r){
    int sum = 0;
    for(int i=0; i<r; i++){
        sum+= a[i][i];
    }
    cout<<"primary sum is "<<sum<<endl;
}

void secDiagonalSum(int a[][3], int r){
    int sum = 0;
    for(int i=0; i<r; i++){
        sum+= a[i][r-i-1];
    }
    cout<<"sec diagonal sum is "<<sum<<endl;
}


void diagonalPrint(int a[][3], int r){
    for(int i=0; i<r; i++){
        cout<<a[i][i]<<" ";
    }
    cout<<endl;
}

void secDiagonalPrint(int a[][3], int r){
    for(int i=0; i<r; i++){
        cout<<a[i][r-i-1]<<" ";
    }
    cout<<endl;
}

int main(){
    int r = 3, c = 3, k = 100;
    int a[][3] = {
        {10,20,30}, {40,50,60}, {70,80,90}
    };
    diagonalSum(a,r);
    secDiagonalSum(a,r);
    diagonalPrint(a,3);
    secDiagonalPrint(a,3);
    return 0;
}