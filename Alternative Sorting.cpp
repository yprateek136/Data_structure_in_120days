//  Alternative Sorting.cpp
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    sort(arr, arr + N);
        vector<int> res;
        int index = 0;
        int i = 0, j = N - 1;
        while(i <= j)
        {
            if(index % 2 == 0)
            {
                res.push_back(arr[j]);
                j--;
            }
            else
            {
                res.push_back(arr[i]);
                i++;
            }
            index++;
        }
        return res;
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
