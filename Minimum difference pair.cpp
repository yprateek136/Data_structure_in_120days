// Minimum difference pair.cpp
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
   	int  minimum_difference(vector<int>nums)
   	{
   	    // Code 
   	    int dif=0;
   	    int dif1=nums[0];
   	    sort(nums.begin(),nums.end());
   	    for(int i=0;i<nums.size()-1;i++)
   	    {
            dif = abs(nums[i] - nums[i+1]);
   	        if(dif <= dif1)
   	        {
                dif1=dif;
   	        }
   	    }
   	    return dif1;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.minimum_difference(nums);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends
