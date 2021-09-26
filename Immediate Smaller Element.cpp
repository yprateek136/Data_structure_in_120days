/*-------- Immediate Smaller Element.cpp--------*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void immediateSmaller(int *arr, int n) {
	    //  code here
	    stack< int >st;
        for(int i=n-1;i>=0;i--)
        {
            int x = arr[i];
            if(!st.empty() && st.top() >= arr[i])
            {
                arr[i] = -1;
            }
            else if(st.empty())
            {
                arr[i] = -1;
            }
            else
            {
                arr[i] = st.top();
            }
            st.push(x);
        }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
