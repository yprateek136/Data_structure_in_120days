//  Elements in the Range.cpp
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		sort(arr,arr+n);
        int x = B-A+1;
        int count=0;
        for(int i=0;i<n;i++) 
        {
            if(arr[i]>=A && arr[i]<=B && arr[i]!=arr[i+1])
            {
                count++;
            }
        }
        if(count == x)
        {
            return true;
        }
        else
        {
            return false;
	    }
	}
};
	

// { Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}






  // } Driver Code Ends
