/*
Problem :   1374A - Required Remainder
Link    :   https://codeforces.com/contest/1374/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        long long x, y, n;
        cin>>x>>y>>n;
        if(n%x==y) cout<<n<<endl;
        else if(n%x>y) cout<<(n - (n%x) + y)<<endl;
        else cout<<(n - x - (n%x) + y)<<endl;
    }
    return 0;
}
