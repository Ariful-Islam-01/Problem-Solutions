/*
Problem :   A - Presents
Link    :   https://codeforces.com/problemset/problem/136/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int b[n+1];
    for(int i=1; i<n+1; i++){
        cin>>arr[i];
        b[arr[i]] = i;
    }
    for(int i=1; i<n+1; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}
