// Find first repeated character.cpp
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    int freq[26]={0};
    string str;
    //calculating the frequency of each character
    for(int i=0 ;i<s.size();i++)
    {
        freq[s[i] - 'a']++;
        if( freq[s[i]-'a'] > 1)
        {
            str = s[i];
            return str;
            break;
        }
    }
    return "-1";
}
