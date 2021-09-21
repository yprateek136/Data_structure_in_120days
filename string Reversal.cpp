// string Reversal.cpp
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}
// } Driver Code Ends


string reverseString(string s)
{
    //code here.
    int hash[256]={0};
    string str;
    for(int i=s.size()-1 ; i>=0 ;i--)
    {
        if(s[i] == ' ')
        {
            continue;
        }
        else if(hash[s[i]]==0)
        {
            str += s[i];
        }
        hash[s[i]]++;
    }
    return str;
}
