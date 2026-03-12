/*
Problem :   2131B - Alternating Series
Link    :   https://codeforces.com/problemset/problem/2131/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1; i<n; i++){
            if(i%2){
                cout<<-1<<" ";
            }
            else{
                cout<<3<<" ";
            }
        }
        if(n%2) cout<<-1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
