// https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    getline(cin, a);
    getline(cin, b);
    
    cout << a.size() << " " << b.size() <<endl;
    
    string d = a + b;

    cout << d << endl;
    
    char temp = a[0];
    
    a[0] = b[0];
    b[0] = temp;
        
    cout << a << " " << b <<endl;    
    
    
  
    return 0;
}