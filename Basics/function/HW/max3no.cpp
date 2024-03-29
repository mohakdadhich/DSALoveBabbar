#include <bits/stdc++.h>
using namespace std;
// void printMaxi(int num1, int num2, int num3){
//     if(num1>=num2 && num1>=num3){
//         cout<<"Max is "<<num1<<endl;}
//     else if(num2>=num1 && num2>=num3){
//         cout<<"Max is "<<num2<<endl;}
//     else{
//         cout<<"Max is "<<num3<<endl;}
// }

void printMaxi(int x, int y, int z){
    int max1 = max(x,y);
    int max2 = max(max1, z);
    cout<<"Max is "<<max2<<endl;
}
int main(){
    int x, y, z;
    cin>>x>>y>>z;
    printMaxi(x,y,z);
    return 0;
}