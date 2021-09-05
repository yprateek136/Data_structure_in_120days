//  Find the element that appears once in sorted array.cpp
#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
       int XOR = 0;
        for (int i = 0; i < n; i++) 
        {
            XOR = XOR ^ arr[i];
        }
        return XOR;
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
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}  
