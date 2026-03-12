/*
Problem :   996A - Hit the Lottery
Link    :   https://codeforces.com/problemset/problem/996/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans = 0;
    cin>>n;
    while(n){
        if(n>=100){
            ans++;
            n -= 100;
        }
        else if(n>=20){
            ans++;
            n -= 20;
        }
        else if(n>=10){
            ans++;
            n -= 10;
        }
        else if(n>=5){
            ans++;
            n -= 5;
        }
        else{
            ans++;
            n -= 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
