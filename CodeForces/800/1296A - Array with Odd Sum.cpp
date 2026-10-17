/*
Problem :   1296A - Array with Odd Sum
Link    :   https://codeforces.com/problemset/problem/1296/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a, sum = 0, odd = 0, even = 0;
        for(int i=0; i<n; i++){
            cin>>a;
            sum += a;
            if(a%2) odd++;
            else even++;
        }
        if(sum%2) cout<<"YES"<<endl;
        else if(even != 0 && odd != 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}