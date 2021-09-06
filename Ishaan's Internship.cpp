// Ishaan's Internship.cpp
#include<bits/stdc++.h>
using namespace std;
int getCandidate(int n, int k);
int main() 
{

    int t;
    cin >> t;
    while(t--){
    	int n, k;
    	cin >> n >> k;
    	cout << getCandidate(n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends
int getCandidate(int n, int k)
{
    //complte the function here
    int ans=1;
    while(n>=k)
    {
       ans = ans*k;
       n/=k;
    }   
   return ans;
}
