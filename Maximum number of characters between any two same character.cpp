/*--- Maximum number of characters between any two same character.cpp---*/
#include<bits/stdc++.h>
using namespace std;
int maxChars (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << maxChars (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int maxChars (string S)
{
    // your code here
    unordered_map<char,int>ump;
    int max = -1;
    for(int i=0;i<S.length();i++) 
    {
        if(ump.find(S[i]) != ump.end()) 
        {
            if(i - ump[S[i]] > max)
                max = i - ump[S[i]] - 1;
        }
        else
            ump[S[i]]=i;
    }
    return max;
}
