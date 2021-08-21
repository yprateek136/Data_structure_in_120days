// Check if strings are rotations of each other or not.cpp
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1.length() != s2.length())
        {
            return false;
        }
        //concatenate string
        string temp = s1 + s1;
        if(temp.find(s2) != string::npos)
            return true;
        else
            return false;
    }
};

//Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
