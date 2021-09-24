/*--- Top K Frequent Elements in Array.cpp ---*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k)
    {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> frequency;
        vector<int>res;
        for(auto key : mp)
        {
            frequency.push_back(make_pair( key.second , key.first));
        }
        sort(frequency.rbegin() , frequency.rend());
        int i=0;
        while(k--)
        {
            res.push_back(frequency[i].second);
            i++;
        }
        return res;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
