/*
Problem :   2188A - Divisible Permutation
Link    :   https://codeforces.com/problemset/problem/2188/A
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        int a = 1;
        int b = n;
        for(int i=n; i>0; i--){
            if(i%2){
                arr[i] = a;
                a++;
            }
            else{
                arr[i] = b;
                b--;
            }
        }
        for(int i=1; i<n+1; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
