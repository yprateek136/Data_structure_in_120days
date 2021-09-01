// Maximum product of two numbers.cpp
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:

	int maxProduct(int arr[], int n) {
	    
	    sort(arr , arr+n);
	    long long int max_product=arr[n-1]*arr[n-2];
	    return max_product;
	}
};

//Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
