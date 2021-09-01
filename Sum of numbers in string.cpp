// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;
class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        int sum=0;
        int sum1=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                // Iterate through all characters
                // of input string and update result
                // take ASCII character of corresponding digit and
                // subtract the code from '0' to get numerical
                sum1=(10*sum1)+(str[i]-'0');
            }
            else
            {
                sum+=sum1;
                sum1=0;
            }
        }
        sum+=sum1;
        return sum;
    }
};

//Driver Code Starts.
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
