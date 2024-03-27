#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number: ";
    int number;
    cin>>number;
    /*if(number>0){
        cout<<"+ve\n";
    }
    else if(number<0){
        cout<<"-ve\n";
    }
    else{
        cout<<"0\n";
    }*/
    if(number%2==0){
        cout<<"even no\n";
    }
    else{
        cout<<"odd\n";
    }
    return 0;
    // else is optional
}