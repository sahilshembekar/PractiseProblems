#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
         vector<int> v;
         sort(arr,arr+n);
        for(int i=0;i<n;i++)
   {
       if((i>0)&&(arr[i]==arr[i-1]))
       continue;
       else
       {
           if(arr[i]==arr[i+1])
           {
            v.push_back(arr[i]);
           }
       }
   }
   if(v.empty()==true)
   {
       v.push_back(-1);
       return v;
   }
   else
   return v;
   }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends