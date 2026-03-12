/*
Problem :   2013A - Zhan's Blender
Link    :   https://codeforces.com/contest/2013/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        int a = min(x,y);
        if(n%a==0) cout<<(n/a)<<endl;
        else cout<<(n/a)+1<<endl;
    }
    return 0;
}
