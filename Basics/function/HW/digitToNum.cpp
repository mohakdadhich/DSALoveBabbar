#include<bits/stdc++.h>
using namespace std;
// Function to create a number using digits
int createNumber(vector<int> digits) {
    int result = 0;
    for (int i = 0; i < digits.size(); ++i) {
        result = result * 10 + digits[i];
    }
    return result;
}

int main() {
    vector<int> digits = {1, 2, 3, 4, 5}; // Example digits
    int number = createNumber(digits);
    cout << "Number created using digits: " << number << endl;
    return 0;
}
