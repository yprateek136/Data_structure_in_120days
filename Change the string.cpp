//  Change the string.cpp
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string modify (string s)
    {
        for (int i = 1; i < s.length(); i++)
        {
            if (isupper(s[0]))
            {
                // converting to uppercase
                if (s[i] >= 'a' and s[i] <= 'z')
                s[i] = s[i] - 'a' + 'A';
            }
            else
            {
                // converting to lowercase
                if (s[i] >= 'A' and s[i] <= 'Z')
                s[i] = s[i] - 'A' + 'a';
            }
        }
        return s;
    }
};

// Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; 
		cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
} 
