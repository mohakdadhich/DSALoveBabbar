#include <bits/stdc++.h>
using namespace std;
// fatega when  a = 3 3 3
//              b = 3 3 3
//              c = 3 3 3
/*vector<int> findCommon(int a[], int b[], int c[], int n1, int n2, int n3){
    vector<int> ans;
    int i,j,k;
    i=j=k=0;
    while (i<n1 && j<n2 && k<n3)
    {
        if(a[i]==b[j] && b[j]==c[k]){
            ans.push_back(a[i]);
            i++,j++,k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else{
            k++;
        }
    }
    return ans;
    
}*/

vector<int> findCommon(int a[], int b[], int c[], int n1, int n2, int n3){
    vector<int> ans;
    set<int>st;
    int i,j,k;
    i=j=k=0;
    while (i<n1 && j<n2 && k<n3)
    {
        if(a[i]==b[j] && b[j]==c[k]){
            // ans.push_back(a[i]);
            st.insert(a[i]);
            i++,j++,k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else{
            k++;
        }
    }
    for(auto i:st){
        ans.push_back(i);
    }
    return ans;
    
}


int main(){
    // int a[] = {1, 5, 10, 20, 40, 80};
    // int b[] = {6, 7, 20, 80, 100};
    // int c[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int a[] = {3,3,3};
    int b[] = {3,3,3};
    int c[] = {3,3,3};

    int n1 = sizeof(a)/sizeof(a[0]), n2 = sizeof(b)/sizeof(b[0]), n3 = sizeof(c)/sizeof(c[0]);
    vector<int>ans = findCommon(a,b,c,n1,n2,n3);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}