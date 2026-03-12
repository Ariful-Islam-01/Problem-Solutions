/*
Problem :   1957A - Stickogon
Link    :   https://codeforces.com/problemset/problem/1957/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, p = 0;
        cin>>n;
        int arr[n+1];
        for(int i=1; i<n+1; i++){
            cin>>arr[i];
        }
        int freq[101] = {0};
        for(int i=1; i<n+1; i++){
            freq[arr[i]]++;
        }
        for(int i=1; i<101; i++){
            if(freq[i]>2){
                p += freq[i] / 3;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}