/*----------Print all possible strings.cpp---------*/
#include<bits/stdc++.h>
using namespace std;

vector<string>spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}
// } Driver Code Ends


/*You have to complete this function*/
void space(string s,string str,int i,vector<string> &vec,int n){
    if(i==n-1){
        str+=s[i];
        vec.push_back(str);
        return;
    }
    str+=s[i];
    space(s,str,i+1,vec,n);
    space(s,str+" ",i+1,vec,n);
}
vector<string>  spaceString(char str[])
{
    int n=strlen(str);
    vector<string> vec;
    space(str,"",0,vec,n);
    return vec;
}
