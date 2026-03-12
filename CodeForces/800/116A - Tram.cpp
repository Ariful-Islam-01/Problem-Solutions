/*
Problem :   116A - Tram
Link    :   https://codeforces.com/problemset/problem/116/A
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c=0;
    cin>>n;
    int cap = 0;
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        c = c - a;
        c = c + b;
        if(c>cap) cap = c;
    }
    cout<<cap<<endl;
    return 0;
}
