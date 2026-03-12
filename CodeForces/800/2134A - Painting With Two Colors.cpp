/*
Problem :   2134A - Painting With Two Colors
Link    :   https://codeforces.com/problemset/problem/2134/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        if((n%2) == (b%2)){
            if((n%2)==(a%2)) cout<<"YES"<<endl;
            else if(b>a) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
