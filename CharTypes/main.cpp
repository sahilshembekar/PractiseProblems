//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            int u=0;
            int l=0;
            int sp=0;
            int n=0;
            for(char c:s){
                if(c>=65 and c<=90){
                   u++;
               }
               else if(isdigit(c)){
                   n++;
               }
                else if(c>=97 and c<=122){
                   l++;
               }
               else{
                   sp++;
               }
           }
           vector<int> v;
           v.push_back(u);
           v.push_back(l);
           v.push_back(n);
           v.push_back(sp);
           return v;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal  // } Driver Code Ends