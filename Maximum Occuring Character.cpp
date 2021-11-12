/*------------------Maximum Occuring Character-----------*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[256] = {0};
        for(int i = 0; i < str.size(); ++i){
            arr[str[i]]++;
        }
        int max = INT_MIN;
        char result;
        for(int i = 0; i < str.size(); ++i){
            if(arr[str[i]] > max){
                result = str[i];
                max = arr[str[i]];
            }
            else if(arr[str[i]] == max){
                if(result > str[i]) 
                    result = str[i];
            }
        }
        return result;
    }
};
// { Driver Code Starts.
int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends
