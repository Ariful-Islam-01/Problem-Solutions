/*
Problem :   2149A - Be Positive
Link    :   https://codeforces.com/contest/2149/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 0, neg = 0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(a==0) ans++;
            if(a==-1) neg++;
        }
        if(neg%2==0) cout<<ans<<endl;
        else cout<<(ans+2)<<endl;
    }
    return 0;
}
