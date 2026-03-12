/*
Problem :   1948A - Special Characters
Link    :   https://codeforces.com/problemset/problem/1948/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int a = 2;
            while(a<=n){
                if(a%2==0 && a%4==0){
                    cout<<"BB";
                    a += 2;
                }
                else{
                    cout<<"AA";
                    a += 2;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
