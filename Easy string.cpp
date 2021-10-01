/*-----------Easy string.cpp----------*/
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}

// } Driver Code Ends

string transform(string s){
    // using transform() function and ::tolower in STL
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int c = 1;
    string ans;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i - 1]) {
            c++;
            continue;
        }
        else{
            ans += to_string(c);
            ans += s[i - 1];
            c = 1;
        }
    }
    ans += to_string(c);
    ans += s[s.length() - 1];
    return ans;
}
