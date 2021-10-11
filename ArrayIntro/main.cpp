#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int n {};
vector <int> a;

int main() {
    cout << "Values: " ;
    cin >> n;

    for (int i{0} ; i<n ; ++i) {
        int z {};
        cout << "Enter Value: ";
        cin >> z;
        a.push_back(z);
    }

    for (int i{n-1} ; i>=0 ; --i) {
        cout << a.at(i);
    }
    
    return 0;
}


// Elegant code using Arrays
    // int numElements;
    // cin >> numElements;
    // int arr[numElements];
    // for (int i = 0; i < numElements; i++)
    //     cin >> arr[i];
    // for (int i = numElements - 1; i >= 0; i--)
    //     cout << arr[i] << " ";

