#include <bits/stdc++.h>
using namespace std;
// bool isPrime(int n){
//     for(int i=2; i<n; i++){
//         if(n%i==0)
//             return 0;
//         return 1;
//     }
// }
bool isPrime(int n){
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0)
            return 0;
        return 1;
    }
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n))
        cout<<n<<" is a prime no.";
    else
        cout<<n<<" is not a prime no.";        
    return 0;
}