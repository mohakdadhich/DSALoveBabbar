#include <bits/stdc++.h>
using namespace std;
int findMax(int a[][3], int r, int c){
    int maxi = INT_MIN;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]>maxi)
                maxi = a[i][j];
        }
    }
    return maxi;
}

int findMin(int a[][3], int r, int c){
    int mini = INT_MAX;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]<mini)
                mini = a[i][j];
        }
    }
    return mini;
}

int main(){
    int r = 3, c = 3, k = 100;
    int a[][3] = {
        {10,20,30}, {40,50,60}, {70,80,90}
    };
    cout<<"Max is "<<findMax(a,r,c)<<endl;
    cout<<"Min is "<<findMin(a,r,c)<<endl;
    return 0;
}