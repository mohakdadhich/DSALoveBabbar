#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int>v){
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>a = {1,2,3,4};
    // vector<int>a1(5,2); // init wth n size with 2 data
    // vector<int>a2 = {1,2,3,4,5};
    // vector<int>a3{1,2,3,4,5};
    // vector<int>a4(a3);

    cout<<"beginning: "<<a.front()<<endl;
    cout<<"end: "<<a.back()<<endl;
    printVector(a);


    return 0;
}