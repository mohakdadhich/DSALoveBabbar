#include <bits/stdc++.h>
using namespace std;

void printRowWise(int a[][3], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transposeArr(int a[][3], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=i; j<c; j++){
            swap(a[i][j], a[j][i]);
        }
    }
    printRowWise(a, r, c);
}



int main(){
    int a[][3] = {
        {2,4,6},
        {8,3,5},
        {7,9,1}
        };
        cout<<"Before transpose\n";
        printRowWise(a,3,3);
        cout<<"After transpose\n";
        transposeArr(a,3,3);
        
    return 0;
}