#include <iostream>
#include <vector>

using namespace std;

    int missingNumber(vector <int> nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while (low<=high) {
            mid = low + (high-low)/2;
            if (low==mid) {
                return (nums.at(mid)+1);
            }
            else if (nums.at(mid)-nums.at(low) == mid-low) {
                low = mid+1;
            }
            else {
                high = mid-1;
            } 
             
        }
        return -1;
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