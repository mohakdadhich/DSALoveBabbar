#include <bits/stdc++.h>
using namespace std;

vector<int> spiralPrint(vector<vector<int>>& v) { // Pass v by reference to avoid unnecessary copying
    vector<int> ans;
    int m = v.size();
    int n = v[0].size();
    int totalElements = m * n;
    int count = 0;
    
    int startingRow = 0;
    int startingCol = 0;
    int endingCol = n - 1;
    int endingRow = m - 1;
    
    
    while (count < totalElements) {
        // starting row
        for (int i = startingCol; i <= endingCol; i++) {
            ans.push_back(v[startingRow][i]);
            count++;
        }
        startingRow++;
        
        // ending coln
        for (int i = startingRow; i <= endingRow; i++) {
            ans.push_back(v[i][endingCol]);
            count++;
        }
        endingCol--;
        
        // ending row
        for (int i = endingCol; i >= startingCol && count < totalElements; i--) {
            ans.push_back(v[endingRow][i]);
            count++;
        }
        endingRow--;
        
        // starting col
        for (int i = endingRow; i >= startingRow && count < totalElements; i--) {
            ans.push_back(v[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    
    return ans; // Return the result
}

int main() {
    vector<vector<int>> v{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10,11,12}
    };
    vector<int> ans = spiralPrint(v);
    for (auto it : ans) {
        cout << it << " ";
    }

    return 0;
}
