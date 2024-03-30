#include <bits/stdc++.h>
using namespace std;
void rowSum(int a[][3], int r, int c){
    for(int i=0; i<r; i++){
        int sum = 0;
        for(int j=0; j<c; j++){
            sum+=a[i][j];
        }
    cout<<"Sum of row "<<i<<" is "<<sum<<endl;
    }
}

void colSum(int a[][3], int r, int c){
    for(int i=0; i<c; i++){
        int sum = 0;
        for(int j=0; j<r; j++){
            sum+=a[j][i];
        }
    cout<<"Sum of col "<<i<<" is "<<sum<<endl;
    }
}

int main(){
    int r = 3, c = 3, k = 100;
    int a[][3] = {
        {10,20,30}, {40,50,60}, {70,80,90}
    };
    rowSum(a,r,c);
    colSum(a,r,c);
    return 0;
}