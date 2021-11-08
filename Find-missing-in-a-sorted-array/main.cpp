// https://www.geeksforgeeks.org/find-the-missing-number-in-a-sorted-array/

#include <iostream>
using namespace std;

int search(int arr[], int size) {
int low = 0;
int high = size -1;
int mid =0;
while (high-low >=2) { // Binary search till we are left with only 2 elements
mid = low + (high-low)/2;
int midIndexDiff = arr[mid]-mid;
int lowIndexDiff = arr[low]-low;
int highIndexDiff = arr[high]-high;

if (midIndexDiff != lowIndexDiff) {
    high = mid;
}
//else if (midIndexDiff != highIndexDiff) 
else {
    low = mid;
}

}
return (arr[low] + arr[high])/2;
}
int main() {
int arr[] {1,2,3,4,5,6,8};
int size = sizeof(arr)/sizeof(arr[0]);
cout << "The missing number is: " << search (arr,size) <<endl;
return 0;
}
// Output
// The missing number is: 7
