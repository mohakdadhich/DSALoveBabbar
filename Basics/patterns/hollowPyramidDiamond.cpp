#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    for(int i=0; i<n; i++){
        for(int s = 0; s<n-i-1; s++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            if(j ==0 || j == i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
for(int i=0; i<n; i++){
        for(int s =0; s<i; s++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            if(j ==0 || j == n-i-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}

/*

    * 
   * *
  *   *
 *     *
*       * 
   and          you got hollow diamong
*       *
 *     *
  *   * 
   * *
    *
*/