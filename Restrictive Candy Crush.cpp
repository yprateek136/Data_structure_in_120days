/*----------- Restrictive Candy Crush.cpp-------------*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        string ans="";
        if(k == 1)
            return ans;
        stack<pair<char,int>>st;
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(st.empty()){
                count = 1;
                st.push({s[i],count});
            }
            // compare the store element in the stack to s[i] element in the stack 
            else if(st.top().first == s[i]){
                count = st.top().second + 1;
                st.push({s[i],count});
                if(count == k){
                    while(count--)
                        st.pop();
                }
            }
            else{
                count = 1;
                st.push({s[i],count});
            }
        }
        while(!st.empty()){
            ans += st.top().first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}  // } Driver Code Ends
