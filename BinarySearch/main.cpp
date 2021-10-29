#include <stdio.h> 
  
// Recursive binary search function

//It returns the location of x in given array arr[l..r] is present, 
// otherwise -1 

int binarySearch(int arr[], int l, int r, int x) 
{   
    //Your Code here
    int mid = l + (r-l)/2;
    if (r>=1) { // Remember the if condition
        if (arr[mid]==x) {
            return mid;
        }
        if (arr[mid]< x) {
            return binarySearch(arr, mid+1, r, x);
        }
        if (arr[mid] > x) {
            return binarySearch(arr, l, mid-1,x);
        }
        return -1;
    }
    
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 
}