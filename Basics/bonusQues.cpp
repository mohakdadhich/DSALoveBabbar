#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    if(cin>>n){
        cout<<"hello\n";
    }

    int m = 10;
    if(cout<<m<<endl){
        cout<<"hello ji\n";
    }
    return 0;
}

/*
Here, int n; declares an integer variable n.
if(cin>>n) reads an integer value from the standard input stream (cin) into n. If the input operation (cin>>n) is successful (i.e., if the user inputs a valid integer), the condition is true and "hello\n" is printed to the standard output stream (cout). Otherwise, if the input operation fails (e.g., if the user inputs a non-integer value), nothing is printed.

if(cout<<m<<endl) prints the value of m followed by a newline (endl) to the standard output stream (cout). The expression cout<<m<<endl returns cout, which can be treated as a boolean value. If the output operation is successful, it evaluates to true, and "hello ji\n" is printed. Otherwise, if the output operation fails, nothing is printed.


*/