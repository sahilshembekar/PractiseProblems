
// C++ program to find minimum difference between 
// any pair in an unsorted array 
#include <bits/stdc++.h> 
using namespace std; 
  
// Returns minimum difference between any pair 
int findMinDiff(int arr[], int n) 
{ 
   // Sort array in non-decreasing order 
   sort(arr, arr+n); 
  
   // Initialize difference as infinite 
   int diff = INT_MAX; 
  
   // Find the min diff by comparing adjacent 
   // pairs in sorted array 
   for (int i=0; i<n-1; i++) 
      if (arr[i+1] - arr[i] < diff) 
          diff = arr[i+1] - arr[i]; 
  
   // Return min diff 
   return diff; 
} 
  
// Driver code 
int main() 
{ 
   int arr[] = {1, 5, 3, 19, 18, 25}; 
   int n = sizeof(arr)/sizeof(arr[0]);  
   cout << "Minimum difference is " << findMinDiff(arr, n); 
   return 0; 
} 


// // C++ implementation of simple method to find 
// // minimum difference between any pair 
// #include <bits/stdc++.h> 
// using namespace std; 
  
// // Returns minimum difference between any pair 
// int findMinDiff(int arr[], int n) 
// { 
//    // Initialize difference as infinite 
//    int diff = INT_MAX; 
  
//    // Find the min diff by comparing difference 
//    // of all possible pairs in given array 
//    for (int i=0; i<n-1; i++) 
//       for (int j=i+1; j<n; j++) 
//           if (abs(arr[i] - arr[j]) < diff) 
//                 diff = abs(arr[i] - arr[j]); 
  
//    // Return min diff 
//    return diff; 
// } 
  
// // Driver code 
// int main() 
// { 
//    int arr[] = {1, 5, 3, 19, 18, 25}; 
//    int n = sizeof(arr)/sizeof(arr[0]); 
//    cout << "Minimum difference is " << findMinDiff(arr, n); 
//    return 0; 
// } 
