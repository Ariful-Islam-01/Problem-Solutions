/*
Problem :   151A - Soft Drinking
Link    :   https://codeforces.com/problemset/problem/151/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    int a = min(drink, lime);
    int b = min(a, salt);
    cout<<(b/n)<<endl;
    return 0;
}