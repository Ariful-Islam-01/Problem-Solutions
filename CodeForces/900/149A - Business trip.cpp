/*
Problem :   149A - Business trip
Link    :   https://codeforces.com/problemset/problem/149/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    int arr[12];
    for(int i=0; i<12; i++){
        cin>>arr[i];
    }
    sort(arr, arr+12, greater<int>());
    int sum = 0;
    int cnt = 0;
    for(int i=0; i<12; i++){
        cnt++;
        sum += arr[i];
        if(sum>=k) break;
    }
    if(k==0) cout<<0<<endl;
    else if(sum<k) cout<<-1<<endl;
    else cout<<cnt<<endl;
    return 0;
}
