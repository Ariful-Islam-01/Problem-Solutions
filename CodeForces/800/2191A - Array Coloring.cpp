/*
Problem :   2191A - Array Coloring
Link    :   https://codeforces.com/problemset/problem/2191/A
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n==2){
            cout<<"YES"<<endl;
        }
        else{
            bool f = true;
            for(int i=0; i<n-1; i++){
                if(arr[i]%2 == arr[i+1]%2){
                    f = false;
                    break;
                }
            }
            if(f) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
