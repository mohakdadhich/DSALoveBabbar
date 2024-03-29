#include <bits/stdc++.h>
using namespace std;
void printAreaofCircle(int rad){
    // float area = 3.14 * rad * rad;
    float area = 3.14 * pow(rad,2);
    cout<<"Area is "<<area<<endl;
}
int main(){
    int rad = 2;
    printAreaofCircle(2);
    return 0;
}