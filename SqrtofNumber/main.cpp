#include <bits/stdc++.h>
#include<math.h>
using namespace std;

// Recursive Binary Search
// of a number with precision upto 5 decimal places
double Square(double n, double low, double high)
{
    double l= low;
    double h=high;
    while(low<=high) {
        double mid = low +(high-low)/2;
        double mul=mid*mid;
        
        if (mul==n || (abs(mul - n) < 0.00001)) { // important to check if the difference is less than 0.00001 and return if otherwise
            return mid;
        }
        else if (mul<n) {
            low=mid;
            
        }
        else {
            high= mid;
        }
    }
    return 0;

}

// Function to find the square root of n
void findSqrt(double n)
{
	double i = 1;
	bool found = false;
	if (n==0) {
	    cout << "The square root of " << n << " is: 0";
	}
	else {
	   while (!found) {
	    
	    if (i*i==n) {
	        cout << "The square root of " << n << " is: " << i <<endl;
	        found =true;
	    }
	    else if (i*i>n) {
	        double ans = Square(n,i-1,i);
	       cout << "The square root of " << n << " is: " << setprecision(5) << ans <<endl;
	        found =true;
	    }
	    i++;
	} 
	}
}
// Driver code
int main()
{
	double n;
    cout << "Please enter the number you want the sqaure root of: ";
    cin>> n;
	findSqrt(n);
	
	//Check your value

    cout << "The correct value with Math Function is: " << sqrt(n);
	return 0;
}