/*
Problem :   1829A - Love Story
Link    :   https://codeforces.com/problemset/problem/1829/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1 = "codeforces";
		string s;
		cin>>s;
		int ans = 0;
		for(int i=0; i<10; i++){
			if(s[i]!=s1[i]) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}