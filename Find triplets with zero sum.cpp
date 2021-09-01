// Find triplets with zero sum
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr, arr+n);
        int i,start,end,sum;
        for(i = 0; i < n-2; i++)
        {
            start=i+1;
            end=n-1;
            while(start < end)
            {
                sum = arr[i] + arr[start] + arr[end];
                if(sum == 0)
                {
                    return 1;
                }
                else if(sum < 0)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
        return 0;
    }
};

//Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
} 
