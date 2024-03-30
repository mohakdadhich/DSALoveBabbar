#include <bits/stdc++.h>
using namespace std;
void printRowWise(int a[][4], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printColWise(int a[][4], int r, int c){
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int r = 3, c = 4;
    int arr[][4] = {
        {1,2,3,4}, {5,6,7,8}, {9,10,11,12}
    };
    printRowWise(arr, r, c);
    printColWise(arr, r, c);
    return 0;
}