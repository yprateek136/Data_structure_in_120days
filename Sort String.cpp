// Sort String.cpp
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while ( t-- ) 
    {
        int charcount[26] = {0};
        string s;
        cin >> s;
         // Traverse string and increment 
            // count of characters
        for ( int i = 0 ;i<s.size(); i++ ) 
        {
            
            // 'a'-'a' will be 0, 'b'-'a' will be 1,
        // so for location of character in count 
        // array we wil do s[i]-'a'.
            charcount[s[i]-'a']++;
        }
         // Traverse the hash array and print 
            // characters
        for ( int i = 0 ; i < 26 ; i++ ) 
        {
            while ( charcount[i]-- )
            {
                cout << char(i +'a');
            }
        }
        cout << endl;
    }
	
	return 0;
}
