#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	vector<int> alternateSort(int arr[], int N)
	{
	     // Your code goes here
        vector<int>v1;
        sort(arr,arr+N);
        int a=0;
        int b=N-1;
        for(int i=0;i<N/2;i++)
        {
            v1.push_back(arr[b]);
            if(a!=b)
            {
                v1.push_back(arr[a]);
            }
            a++;
            b--;
	    }
	    if(N%2==1)
	    {
	         v1.push_back(arr[N/2]);
	    }
	    return v1;
	}
};
	

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
