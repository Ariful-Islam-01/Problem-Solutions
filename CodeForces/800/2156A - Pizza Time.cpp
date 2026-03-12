/*
Problem :   2156A - Pizza Time
Link    :   https://codeforces.com/problemset/problem/2156/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m = n;
        int hao = 0;
        while(m>2){
            hao++;
            m -= 2;
        }
        cout<<hao<<endl;
    }
    return 0;
}
