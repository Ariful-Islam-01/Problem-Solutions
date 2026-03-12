/*
Problem :   160A - Twins
Link    :   https://codeforces.com/problemset/problem/160/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }
    sort(a, a+n, greater<int>());
    int c = 0;
    for(int i=0; i<n; i++){
        c += a[i];
        if(c>sum/2){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
