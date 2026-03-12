/*
Problem :   1966A - Card Exchange
Link    :   https://codeforces.com/problemset/problem/1966/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		bool f = false;
		for(int i=0; i<n; i++){
			int cnt = 0;
			for(int j=0; j<n; j++){
				if(arr[i]==arr[j]) cnt++;
			}
			if(cnt>=k){
				f = true;
				break;
			}
		}
		if(f){
			if(n<k) cout<<n<<endl;
			else cout<<k-1<<endl;
		}
		else cout<<n<<endl;
	}
	return 0;
}