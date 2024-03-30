#include <bits/stdc++.h>
using namespace std;
bool findTarget(int a[][3], int r, int c, int k){
    bool flag = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]==k)
                flag = 1;
        }
    }
    return flag;
}
int main(){
    int r = 3, c = 3, k = 100;
    int a[][3] = {
        {10,20,30}, {40,50,60}, {70,80,90}
    };
    if(findTarget(a, r, c, k))
        cout<<k<<" is present\n";
    else 
        cout<<k<<" is absent\n";
    return 0;
}