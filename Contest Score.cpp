/*------------Contest Score.cpp-------------*/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        { 
            cin>>arr[i];
        }
        stack<int> s;
        int result[n];
        for(int i = 0 ; i < n ; i++)
        { 
            while(!s.empty() && arr[s.top()] > arr[i])
            {
                result[s.top()] = i+1;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            result[s.top()] = -1;
            s.pop();
        }
        for(int i = 0 ; i < n ; i++)
        { 
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
    return  0;
    
}
