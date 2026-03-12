/*
Problem :   2009B - osu!mania
Link    :   https://codeforces.com/contest/2009/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x[n+1];
        for(int i=1; i<=n; i++){
            string s;
            cin>>s;
            for(int j=0; j<4; j++){
                if(s[j]=='#') x[i] = j+1;
            }
        }
        for(int i=n; i>0; i--){
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
