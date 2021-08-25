//  longest substring containing '1'.cpp
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<maxlength(s)<<endl;
	}
return 0;
}
// Driver Code Ends

int maxlength( string s)
{
    int count=0,count1=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            count++;
            if(count1<count)
            {
                count1=count;
            }
        }
        else
        {
            count=0;
        }
    }
    return count1;
}
