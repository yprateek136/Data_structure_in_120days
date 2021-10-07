/*---------------Height of Heap.cpp-----------------*/
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int heapHeight(int N, int arr[]){
        // code here
        return ceil(log2(N + 1)) - 1;
    }
};

// { Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int N;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.heapHeight(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
