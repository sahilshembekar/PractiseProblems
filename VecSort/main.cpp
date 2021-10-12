#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int n{}, value {};
int main() {
    cin >> n;
    vector<int> a;
    for (int i {0}; i<n; ++i) {
        cin >> value;
        a.push_back(value);
    }
    sort(a.begin(),a.end());   //Error with sort on VS code currenly unfixed
    for (auto x: a) {
        cout << x << " ";
    }  
    return 0;
}
