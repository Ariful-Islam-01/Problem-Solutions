/*
Problem :   1372B - Omkar and Last Class of Math
Link    :   https://codeforces.com/problemset/problem/1372/B
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=n, a, b;
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                k = i;
                break;
            }
        }
        a = n / k;
        b = n - a;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}