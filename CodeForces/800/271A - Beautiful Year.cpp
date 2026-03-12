/*
Problem :   271A - Beautiful Year
Link    :   https://codeforces.com/problemset/problem/271/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;
    int arr[4];
    for(int i=y+1; i<9100; i++){
        arr[3] = i % 10;
        arr[2] = (i / 10) % 10;
        arr[1] = (i /100) % 10;
        arr[0] = i / 1000;
        bool check = true;
        for(int j=0; j<4; j++){
            for(int k=j+1; k<4; k++){
                if(arr[j]==arr[k]){
                    check = false;
                    break;
                }
            }
        }
        if(check){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
