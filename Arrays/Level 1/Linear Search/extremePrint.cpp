#include <bits/stdc++.h>
using namespace std;
void extremePrint(int a[], int n){
    int s = 0, e = n-1;
    while (s<=e)
    {
        cout<<a[s]<<" ";
        if(s==e)
            break;
        cout<<a[e]<<" ";
        s++; e--;
    }
    
}
int main(){
    int a[] = {10,20,30,40,50, 60};
    int n = 6;
    extremePrint(a, n);
    return 0;
}