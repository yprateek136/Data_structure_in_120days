/*------------Subset Sums.cpp-------------*/
#include<bits/stdc++.h> 
using namespace std; 
 // } Driver Code Ends
class Solution
{
public:
    void subSum(vector<int> &arr, int n, int sum, vector<int> &s) {
        if(n == 0) {
        return;
    }
    s.push_back(sum+arr[n-1]);
    subSum(arr, n-1, sum, s);
    subSum(arr, n-1, sum+arr[n-1], s);
}

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> s;
        s.push_back(0);
        subSum(arr, N, 0, s);
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
