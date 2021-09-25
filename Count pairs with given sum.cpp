/*---Count pairs with given sum.cpp---*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
      int count=0;
      // Store counts of all elements in map ump
      unordered_map<int,int>ump;
      
      for(int i = 0 ; i < n ; i++)
      {
          ump[arr[i]]++;
          
      }
        // iterate through each element and increment the
        // count (Notice that every pair is counted twice)
      for(int i = 0 ; i < n ; i++)
      {
          count += (ump[k - arr[i]]);
         // if (arr[i], arr[i]) pair satisfies the condition,
        // then we need to ensure that the count is
        // decreased by one such that the (arr[i], arr[i])
        // pair is not considered
          if(k-arr[i] == arr[i])
          {
              count--;
          }
      }
      return count/2;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends
