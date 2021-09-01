#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
   if(str1.size() < str2.size())
    {
        swap(str1, str2);
    }
    
    int hashStr[26] = {0};
    // count frequency of each charcter in first string
    for(int i = 0; i < str1.size(); i++)
    {
        hashStr[str1[i] - 'a']++;
    }
    // count frequency of each charcter in second string
    for(int i = 0; i < str2.size(); i++)
    {
        hashStr[str2[i] - 'a']--;
    }
    
    int res = 0;
    // traverse count arrays to find number of charcters
    // to be removed
    for(int i = 0; i < 26; i++)
    {
        res += abs(hashStr[i]);
    }
    
    return res;
}
