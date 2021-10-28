/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
// Stack using Array

// CHECK LATER --> https://leetcode.com/problems/design-a-stack-with-increment-operation/

#include <bits/stdc++.h> 
  
using namespace std; 
  
#define MAX 1000 
  
class Stack {
  //Please read sample.java file before starting.
  //Kindly include Time and Space complexity at top of each file
    int top; 
  
public: 
    int a[MAX]; // Maximum size of Stack 
    int limit {MAX}, count {-1};

    Stack() { //Constructor here 
    } 
    bool push(int x); 
    int pop(); 
    int peek(); 
    bool isEmpty(); 
}; 
  
bool Stack::push(int x) 
{ 
    //Your code here
    //Check Stack overflow as well
   if(count==limit-1) {
   cout<<"Stack Overflow"<<endl;
   return false;
   }
   else {
      count++;
      a[count]=x;
      return true;
   }
} 
  
int Stack::pop() 
{ 
    //Your code here
    //Check Stack Underflow as well 
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    else {
        count--;
        return a[count+1];
    }
}
int Stack::peek() 
{ 
    //Your code here
    //Check empty condition too
    if(isEmpty()) {
    cout<<"Stack is empty" << endl;
    return -1;
    }
    else
    return a[count];

} 
  
bool Stack::isEmpty() 
{ 
    //Your code here 
    if(count==-1) 
    return true;
    else
    return false;

}   
// Driver program to test above functions 
int main() 
{ 
    class Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " Popped from stack\n"; 
  
    return 0; 
}