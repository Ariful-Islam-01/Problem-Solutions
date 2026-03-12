/*
Problem :   546A - Soldier and Bananas
Link    :   https://codeforces.com/problemset/problem/546/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin>>k>>n>>w;
    int b = 0;
    for(int i=1; i<=w; i++){
        b = b + k*i;
    }
    if(b>n) cout<<b-n<<endl;
    else cout<<0<<endl;
    return 0;
}
