/*
Problem :   467A - George and Accommodation
Link    :   https://codeforces.com/problemset/problem/467/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i=0; i<n; i++){
        int p, q;
        cin>>p>>q;
        if(q-p >=2) ans++;
    }
    cout<<ans<<endl;
    return 0;
}