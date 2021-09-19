//  Check if a string is Isogram or not.cpp
#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        int len = s.length();
        
        // for converting string to lower case letter
        for(int i = 0; i < len; i++)
        {
            s[i] = tolower(s[i]);
        }
        sort(s.begin() , s.end());
        for(int i = 0; i < len; i++)
        {
            if(s[i] == s[i+1])
            {
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
