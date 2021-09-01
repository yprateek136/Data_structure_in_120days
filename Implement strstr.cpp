// Implement strstr.cpp
#include<bits/stdc++.h>
using namespace std;
int strstr(string ,string);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
//Function to locate the occurrence of the string x in the string s.
string substr(string s, int st, int len)
{
    string res;
    for(int i = 0; i < len; i++)
        res += s[st + i];
    
    return res;
}
int strstr(string s, string x)
{
    int xle = x.length();
    int sle = s.length();
    
    if(s == x || xle == 0)
        return 0;
        
    for(int i = 0; i < sle; i++)
    {
        if(s[i] == x[0])
        {
            if(substr(s, i, xle) == x)
                return i;
        }
    }
        return -1;
}
