/*
Problem :   1352A - Sum of Round Numbers
Link    :   https://codeforces.com/contest/1352/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt = 0;
        vector<int> v;
        while(n>0){
            int d = n%10;
            n = n / 10;
            v.push_back(d);
        }
        int j = 1;
        for(int i=0; i<v.size(); i++){
            v[i] = v[i]*j;
            j = j*10;
            if(v[i]!=0) cnt++;
        }
        cout<<cnt<<endl;
        for(int i=0; i<v.size();i++){
            if(v[i]!=0) cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
