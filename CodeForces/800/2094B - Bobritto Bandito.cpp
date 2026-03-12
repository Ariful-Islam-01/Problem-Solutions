/*
Problem :   2094B - Bobritto Bandito
Link    :   https://codeforces.com/contest/2094/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, l, r;
        cin>>n>>m>>l>>r;
        int l1 = 0, r1 = 0;
        for(int i=0; i<m; i++){
            if(l1>l) l1--;
            else if(r1<r) r1++;
        }
        cout<<l1<<" "<<r1<<endl;
    }
    return 0;
}
