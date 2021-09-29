/*Valid String.cpp*/
#include <bits/stdc++.h>
using namespace std;
string validString(string str)
{
    int count = 0;
    int count1 = 0;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '0')
        {
            count++;
        }
        else
        {
            count1++;
        }
        
        if(count < count1)
        {
            return "no";
        }
    }
    
    return (count == count1) ? "yes" : "no";
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        string str;
        cin >> str;
        cout << validString(str) << "\n";
    }
    return 0;
}
