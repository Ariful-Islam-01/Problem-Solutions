/*
Problem :   118A - String Task
Link    :   https://codeforces.com/problemset/problem/118/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I' || s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){

        }
        else if(s[i]>='A' && s[i]<='Z'){
            char c = s[i] + 32;
            cout<<"."<<c;
        }
        else{
            cout<<"."<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
