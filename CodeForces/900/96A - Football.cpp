/*
Problem :   96A - Football
Link    :   https://codeforces.com/problemset/problem/96/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int zero = 0, one = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            one = 0;
            zero++;
        }
        else{
            zero = 0;
            one++;
        }

        if(zero>=7 || one>=7){
            cout<<"YES"<<endl;
            break;
        }
    }
    if(zero<7 && one<7) cout<<"NO"<<endl;
    return 0;
}
