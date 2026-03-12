/*
Problem :   2147A - Shortest Increasing Path
Link    :   https://codeforces.com/problemset/problem/2147/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b, x=0, y=0;
        cin>>a>>b;
        if(a<b){
            cout<<2<<endl;
        }
        else if(a==b){
            cout<<-1<<endl;
        }
        else{
            x = 1;
            if(x<b && (a-x)>b){
                cout<<3<<endl;
            }
            else cout<<-1<<endl;
        }
    }
    return 0;
}
