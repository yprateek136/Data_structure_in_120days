// Anagram Palindrome.cpp
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends
int isPossible (string s)
{
    // your code here
    int hash[256] = {0};
    for(int i = 0;i < s.size();i++)
    {
        hash[s[i]]++;
    }
    int count = 0;
    for(int i = 0;i < 256;i++)
    {
        if(hash[i]%2!= 0)
            count++;
    }
    return (count <= 1 ? 1 : 0);
}
