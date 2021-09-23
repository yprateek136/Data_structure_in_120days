//  Minimum indexed character.cpp

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int hash[26]={0};
        for(int i=0;i<patt.size();i++)
        {
            hash[patt[i] - 'a']++;
        }
        for(int i=0;i<str.size();i++)
        {
            if(hash[str[i] - 'a'] > 0)
                return i;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends
