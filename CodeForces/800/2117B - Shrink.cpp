/*
Problem :   2117B - Shrink
Link    :   https://codeforces.com/problemset/problem/2117/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        /*
        more precise soln
        for(int i=2; i<=n; i++) cout<<i<<" ";
        cout<<1<<endl;
        */

        int arr[n+1];
        arr[1] = 1;
        arr[n] = 2;
        for(int i=2; i<=n-1;i++){
            arr[i] =  i + 1;
        }
        for(int i=1; i<=n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
