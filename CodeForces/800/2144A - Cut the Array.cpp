/*
Problem :   2144A - Cut the Array
Link    :   https://codeforces.com/problemset/problem/2144/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        int a = 0, b = 0;
        for(int l=1; l<n; l++){
            bool pause = false;
            for(int r=l+1; r<n; r++){
                int s1 = 0, s2 = 0, s3 = 0;
                for(int i=1; i<=l; i++){
                    s1 += arr[i];
                }
                for(int i=l+1; i<=r; i++){
                    s2 += arr[i];
                }
                for(int i=r+1; i<=n; i++){
                    s3 += arr[i];
                }

                if(s1%3 == s2%3 && s2%3 == s3%3 && s3%3 == s1%3){
                    a = l;
                    b = r;
                    pause = true;
                    break;
                }
                if(s1%3 != s2%3 && s2%3 != s3%3 && s3%3 != s1%3){
                    a = l;
                    b = r;
                    pause = true;
                    break;
                }
            }
            if(pause) break;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
