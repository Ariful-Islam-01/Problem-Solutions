/*
Problem :   1800A - Is It a Cat?
Link    :   https://codeforces.com/problemset/problem/1800/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i]>= 'A' && s[i]<='Z'){
                s[i] = s[i] + 32;
            }
        }
        s.erase(unique(s.begin(), s.end()), s.end());
        if(s == "meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}