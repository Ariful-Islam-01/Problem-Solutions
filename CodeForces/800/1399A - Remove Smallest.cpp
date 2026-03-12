/*
Problem :   1399A - Remove Smallest
Link    :   https://codeforces.com/problemset/problem/1399/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        bool one = true;
        for(int i=0; i<n-1; i++){
            if(a[i+1]-a[i]>1){
                one = false;
                break;
            }
        }
        if(one) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
