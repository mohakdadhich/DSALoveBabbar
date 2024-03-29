#include <bits/stdc++.h>
using namespace std;
// return sum
int returnsum3(int a, int b, int c){
    return a + b + c;
}

void printsum3(int a, int b, int c){
    cout<<(a+b+c)<<endl;
}

int main(){
    int x, y, z;
    cout<<"enter 3 no\n";
    cin>>x>>y>>z;
    int ans1 = returnsum3(x,y,z);
    cout<<ans1<<endl;
    printsum3(x,y,z);
    return 0;
}