/*
Problem :   144A - Arrival of the General
Link    :   https://codeforces.com/problemset/problem/144/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int s = 0, mx=a[0], high=0, mn=a[0], low=0;
    for(int i=0; i<n; i++){
        if(a[i]>mx){
            mx = a[i];
            high = i;
        }
        if(a[i]<=mn){
            mn = a[i];
            low = i;
        }
    }

    if(high<low){
        s = (high+1-1) + (n-low-1);
    }
    else{
        s = (n-low-1) + (high+1-1) - 1;
    }
    cout<<s<<endl;
    return 0;
}
