/*
Problem :   339A - Helpful Maths
Link    :   https://codeforces.com/problemset/problem/339/A
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = s.length();
    for(int i=0; i<a-2; i=i+2){
        for(int j=i+2; j<a; j=j+2){
            if(s[i] > s[j]){
                swap(s[i], s[j]);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
