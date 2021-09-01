// Convert to Roman No.cpp
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    string convertToRoman(int n) 
    {
        string romans[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int nums[]      = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string result = "";
        int virtualNum = n;
        int i = 12;
        for(i=12; i>=0; i--)
        {
            while(virtualNum>=nums[i])
            {
                result = result + romans[i];
                virtualNum = virtualNum - nums[i];
            }
        }
        cout<<result;
    }
};

//Driver Code Starts.

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
