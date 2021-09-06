//  Second Largest.cpp
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) 
	{
	    // code here
	    int k=-1;
        sort(arr,arr+n);
        int lastelement = arr[n-1];    //last element
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i] != lastelement)
            {
                k = arr[i];
                break;
            }
        }
        return k;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
