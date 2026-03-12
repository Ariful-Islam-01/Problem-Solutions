/*
Problem :   1992A - Only Pluses
Link    :   https://codeforces.com/contest/1992/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0; i<3; i++) cin>>arr[i];
        for(int i=0; i<5; i++){
            sort(arr, arr+3);
            if(arr[0]<=arr[2]) arr[0]++;
            else if(arr[1]<=arr[2]) arr[1]++;
            else arr[2]++;
        }
        cout<<( arr[0]*arr[1]*arr[2] )<<endl;
    }
    return 0;
}
