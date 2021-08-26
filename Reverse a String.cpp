//Reverse a String.cpp
#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);
int main() 
{	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << reverseWord(s) << endl;
	}
	return 0;
}
// } Driver Code Ends
string reverseWord(string str)
{
  string temp="";
  for(int i=str.size()-1;i>=0;i--)
  {
      temp+=str[i];
  }
  return temp;
}
