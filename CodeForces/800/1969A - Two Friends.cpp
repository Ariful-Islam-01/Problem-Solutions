/*
Problem :   1969A - Two Friends
Link    :   https://codeforces.com/problemset/problem/1969/A
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
		for(int i=1; i<n+1; i++){
			cin>>arr[i];
		}
		bool f = false;
		for(int i=1; i<n+1; i++){
			if(arr[arr[i]]==i){
				f = true;
				break;
			}
		}
		if(f) cout<<2<<endl;
		else cout<<3<<endl;
	}
	return 0;
}