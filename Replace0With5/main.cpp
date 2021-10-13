
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

 // } Driver Code Ends

class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    int i,j,k,l,sum;
    vector<int>v;
    l=n;
    sum=0;
    while(n!=0)
    {
        k=n%10;
        if(k==0)
        {
            v.push_back(5);
        }
        else
        {
            v.push_back(k);
        }
        n=n/10;
    }
    if(l==0)
    {
        return l;
    }
    else
    {
        for(i=v.size()-1;i>=0;i--)
        {
            sum=sum*10+v[i];
        }
       
        return sum;
    }
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}  // } Driver Code Ends
  