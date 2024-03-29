#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cout<<"enter values\n";
    cin>>a>>b;
    cout<<"Choose operation:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n";
    int op;
    cin>>op;
    switch (op)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break;
    case 3:
        cout<<a*b;
        break;
    case 4:
        cout<<a/b;
        break;        
    default:
        cout<<"Inavlid operation";
        break;
    }
    
    return 0;  
}