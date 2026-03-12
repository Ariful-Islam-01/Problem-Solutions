/*
Problem :   705A - Hulk
Link    :   https://codeforces.com/problemset/problem/705/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s1 = "I hate ";
    string s2 = "I love ";
    for(int i=1; i<=n; i++){
        if(n==1){
            cout<<s1;
            break;
        }
        if(i%2!=0) cout<<s1;
        if(i%2==0) cout<<s2;

        if(i!=n) cout<<"that ";
    }
    cout<<"it"<<endl;
    return 0;
}
