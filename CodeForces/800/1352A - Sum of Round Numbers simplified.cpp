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
        vector<int> v;
        int j = 1;
        while(n>0){
            if(n%10 != 0){
                int a = (n%10) * j;
                v.push_back(a);
            }
            n /= 10;
            j *= 10;
        }
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
