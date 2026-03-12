/*
Problem :   228A - Is your horseshoe on the other hoof?
Link    :   https://codeforces.com/problemset/problem/228/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    int t = 4;
    while(t--){
        int n;
        cin>>n;
        st.insert(n);
    }
    cout<<4-st.size()<<endl;
    return 0;
}
