/*
Problem :   2218C - The 67th Permutation Problem
Link    :   https://codeforces.com/problemset/problem/2218/C
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a = 1, c = 3*n;
        for(int i=1; i<=3*n; i++){
            if(i%3==1){
                cout<<a<<" ";
                a++;
            }
            else if(i%3==2){
                cout<<c-1<<" ";
            }
            else{
                cout<<c<<" ";
                c -= 2;
            }
        }
        cout<<endl;
    }
    return 0;
}
