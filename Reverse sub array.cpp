// Reverse sub array.cpp
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	void reverseSubArray(int *arr, int n, int l, int r) 
	{
	    int start=l-1;
	    int end=r-1;
	    while(start < end)
	    {
	        swap(arr[start] , arr[end]);
	        start++;
	        end--;
	    }
	}

};
// Driver Code Starts
int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> l >> r;
        Solution ob;
        ob.reverseSubArray(arr, n, l, r);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
