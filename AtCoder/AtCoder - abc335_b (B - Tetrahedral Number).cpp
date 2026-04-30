/*
Problem :   AtCoder - abc335_b (B - Tetrahedral Number)
Link    :   https://atcoder.jp/contests/abc335/tasks/abc335_b
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<vector<int>> ans;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            for(int k=0; k<=n; k++){
                if(i+j+k <= n){
                    ans.push_back({i, j, k});
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
    }
    return 0;
}