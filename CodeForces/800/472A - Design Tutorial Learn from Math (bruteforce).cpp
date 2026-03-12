/*
Problem :   472A - Design Tutorial: Learn from Math
Link    :   https://codeforces.com/problemset/problem/472/A
*/

#include <bits/stdc++.h>
using namespace std;

bool notPrime(int a){
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0){
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    for(int i=4; i<n; i++){
        int j = n - i;
        if(notPrime(i) && notPrime(j)){
            cout<<i<<" "<<j<<endl;
            break;
        }
    }
    return 0;
}
