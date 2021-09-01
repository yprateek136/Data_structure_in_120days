// Keypad typing.cpp
#include<bits/stdc++.h>
using namespace std;
string printNumber(string , int);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}
string printNumber(string s, int n) 
{
    string ans=""; //Empty string to store ans
    for(int i=0;i<s.length();i++) 
    {
        if(s[i]>='a' && s[i]<='c')
            ans=ans+'2';
        else if(s[i]>='d' && s[i]<='f')
            ans=ans+'3';
        else if(s[i]>='g' && s[i]<='i')
            ans=ans+'4';
        else if(s[i]>='j' && s[i]<='l')
            ans=ans+'5';
        else if(s[i]>='m' && s[i]<='o')
            ans=ans+'6';
        else if(s[i]>='p' && s[i]<='s')
            ans=ans+'7';
        else if(s[i]>='t' && s[i]<='v')
            ans=ans+'8';
        else if(s[i]>='w' && s[i]<='z')
            ans=ans+'9';
    }
    return ans;
}
