/*------------ Geek and Number String.cpp--------------*/
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int minLength(string s, int n){
        stack<int>st;
        for(auto it: s){
            int curr = it - '0';
            if(st.empty())
                st.push(curr);
            else{
                int top = st.top();
                if((top & 1 && top==curr-1) || (!(top&1) && top==curr+1) || abs(top-curr)==9){
                    st.pop();
                }
                else{
                    st.push(curr);
                }
            }
        }
        return st.size();
    }
};


// { Driver Code Starts.

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends
