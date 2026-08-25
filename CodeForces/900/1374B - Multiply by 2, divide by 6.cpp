/*
Problem :   1374B - Multiply by 2, divide by 6
Link    :   https://codeforces.com/problemset/problem/1374/B
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0, b=0;
        while(n%2==0){
            a++;
            n /= 2;
        }
        while(n%3==0){
            b++;
            n /= 3;
        }
        if(n!=1) cout<<-1<<endl;
        else{
            if(a>b) cout<<-1<<endl;
            else cout<<((b-a)+b)<<endl;
        }
    }
    return 0;
}