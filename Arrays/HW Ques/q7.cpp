// factorial of large no...
/*
store in an array each element of array store only single digit of factorial answer*/
#include <bits/stdc++.h>
using namespace std;
vector<int> factorial(int n){
    vector<int> ans ;
    int carry = 0;
    for(int i=2; i<=n; i++){
        for(int j=0; j<ans.size()-1; j++){
            int x = ans[j]*i + carry;
            ans[j] = x%10;
            carry = x/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
        carry = 0;
    }
    // cout<<ans<<endl;
    // while (ans[ans.size()-1] ==0)
    // {
        
    // }
    
    reverse(ans.begin(), ans.end());

    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans = factorial(n);
    for(auto it:ans){
        cout<<it;
    }
    return 0;

}