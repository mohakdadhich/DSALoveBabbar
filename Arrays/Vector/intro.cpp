#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    int size = v.size();
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);
    /*while (1)
    {
        int d; cin>>d;
        v.push_back(d);
        cout<<"Capacity: "<<v.capacity()<<endl;
        cout<<"Size: "<<v.size()<<endl;
    }*/
    // v.pop_back();
    // print(v);

    // v.pop_back();
    // print(v);

    // v.pop_back();
    // print(v);

    // v.pop_back();
    // print(v);

    v.clear();
    print(v);
    cout<<v.capacity()<<" "<<v.size();
    return 0;
}