// add 2 no represented in array
#include <bits/stdc++.h>
using namespace std;
string add(vector<int>a, vector<int>b){
    string ans;
    int carry = 0;
    int i = a.size() -1;
    int j = b.size() -1;
    while (i>=0 && j>=0)
    {
        int x = a[i] + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i--, j--;
    }
    
    while (i>=0)
    {
        int x = a[i] + 0 + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i--;
    }
    while (j>=0)
    {
        int x = 0 + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        j--;
    }
    
    if(carry)
        ans.push_back(carry + '0');
        while (ans[ans.size()-1]=='0')
        {
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
}
int main(){
    vector<int> a{0,9,0,0,3,5};
    vector<int> b{0,0,0,2,2,7};
    string ans = add(a,b);
    cout<<ans;
    return 0;
}