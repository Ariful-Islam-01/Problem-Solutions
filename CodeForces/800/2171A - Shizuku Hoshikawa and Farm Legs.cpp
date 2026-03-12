/*
Problem :   2171A - Shizuku Hoshikawa and Farm Legs
Link    :   https://codeforces.com/contest/2171/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0) cout<<( (n/4) + 1 )<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
