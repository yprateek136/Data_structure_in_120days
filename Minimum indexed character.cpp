// Minimum indexed character.cpp
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
	string printMinIndexChar(string s, string patt)
	{
	    // Code here
	    int hash[26]={0};
	    string ans;
	    for(int i=0;i<patt.size();i++)
	    {
	        hash[patt[i] - 'a']=1;
	    }
	    for(int i=0;i<s.size();i++)
	    {
	        ans = s[i]; 
            if(hash[s[i] - 'a']==1)
                return ans;
	    }
        return "$";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends
