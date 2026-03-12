/*
Problem :   758A - Holiday Of Equality
Link    :   https://codeforces.com/problemset/problem/758/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], mx=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mx = max(mx, a[i]);
    }
    int s = 0;
    for(int i=0; i<n; i++){
        if(a[i]!=mx){
            s = s + mx - a[i];
        }
    }
    cout<<s<<endl;
    return 0;
}
