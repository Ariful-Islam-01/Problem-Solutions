/*
Problem :   2218B - The 67th 6-7 Integer Problem
Link    :   https://codeforces.com/problemset/problem/2218/B
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n = 7;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(int i=0; i<n-1; i++){
            arr[6] = arr[6] - arr[i];
        }
        cout<<arr[6]<<endl;
    }
    return 0;
}
