#include <iostream>
#include <vector>

using namespace std;

    int missingNumber(vector <int> nums) {
        if (nums.size()==0) {
            return -1;
        }
        int start = nums.at(0);
        for (int i = 0; i<nums.size(); i++) {
            if (nums.at(i) == start) {
                start++;
            }
            else {
                return start;
            }
        }
    }
int main() {
    vector <int> nums;
    int n {0};
    int result = -1;
    cout << "Enter number of elements in the array" << endl;
    cin >> n;
    for (int i=0; i < n ; i++ ) {
        int arrayNo {0};
        cout << "Enter the number: ";
        cin>> arrayNo;
        nums.push_back(arrayNo);
    }
    result = missingNumber(nums);
    cout << "The missing number is: " << result << endl;
	return 0;
}