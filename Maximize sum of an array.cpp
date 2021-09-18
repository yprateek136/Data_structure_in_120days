// Maximize sum(arr[i]*i) of an Array.cpp
#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
class Solution{
    public:
    int Maximize(int arr[],int n)
    {
        // Complete the function
        int mod = 1000000007;
        long long sum = 0;
        sort(arr,arr+n);
        for (long long i = 0; i < n; i++) 
        {
            sum += arr[i]* i;
        }   
        return sum % mod;
    }
};

// { Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}  // } Driver Code Ends
