//  Greater on right side.cpp
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	void nextGreatest(int arr[], int n) 
	{
	    int max=-1;
	    for(int i=n-1;i>=0;i--)
	    {
	        int temp=arr[i];
	        arr[i]=max;
	        if(max < temp)
	            max=temp;
	    }
	}
};

//Driver Code Starts.
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
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
