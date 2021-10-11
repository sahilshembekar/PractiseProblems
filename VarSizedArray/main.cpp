#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec; // 2D vector with 'n' rows and 'size' column // Size is inputted at every new iteration of i 
    for (int i = 0; i < n; ++i) {
        cin >> size;  // Size is inputted at every new iteration of i
        vector<int> ivec; 
        for (int j = 0; j < size; ++j) {
            cin >> value; 
            ivec.push_back(value); //Value is pushed to a vector row
        }
        nvec.push_back(ivec); //Vector row is pushed in the 2D vector
    }
    for (int k = 0; k < q; ++k) { // Number of query asked 
        cin >> which >> index; // Basically Input the vector row number and index position 
        cout << nvec[which][index] << endl;
    }
    return 0;
}
