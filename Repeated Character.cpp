//  Repeated Character.cpp
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        int freq[26]={0};
        //calculating the frequency of each character
        for(int i=0 ;i<s.size();i++)
        {
            freq[s[i] - 'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            if( freq[s[i]-'a'] > 1)
            {
                return s[i];
                break;
            }
        }
        return '#';
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}


  // } Driver Code Ends
