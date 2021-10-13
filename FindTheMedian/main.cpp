
//Used the driver code when writing on compiler
  
  #include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort (v.begin(), v.end());
		    
		    if ((v.size() % 2) ==0) {
		        int a {};
		        a = ((v[(v.size()-1)/2] + v[((v.size()-1)/2)+1])/2);
		        return a;
		    }
		    else {
		        int b {};
		        b=v[(v.size()/2)];
		        return b;
		    }
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends
