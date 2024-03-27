#include<iostream>
using namespace std;
// loops -> for while dowhile for-each
int main(){
    /*int i = 0 -> initialization
    i<5 -> condition
    i = i+1 -> updation*/

    for(int i = 0;i<5;i=i+1){
        cout<<i<<endl;
    }

    for(int i = 0;i<3;i=i+1){
        cout<<"Hello Ji "<<i+1<<endl;
    }
    
    for(int i =5; (i>=0 && i<=10);i=i+1){
        cout<<i;
    }
    cout<<endl;    
    for(int i = 0, j=10; i < 5 && j > 5; i++, j-- ){
        cout<<"i: "<<i<<" j: "<<j<<endl;
    }
    cout<<"nested loops\n";
    for(int i=0; i<3; i++){
        cout<<"outer loop "<<i<<" ";
        for(int j=0; j<3; j++){
            cout<<"inner loop "<<j<<" ";
        }cout<<endl;
    }
}