#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n][n];
		map<int,int> map;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin>>arr[i][j];
			}
		}
		for(int i=0; i<n; i++) {
			set <int> s;
			for(int j=0; j<n; j++) {
				s.insert(arr[i][j]);
			}
			for(auto it:s) {
				//cout<<it<< ' ';
				map[it]++;
			}
		}
		int x=0;
		for(auto it:map) {
			if(it.second==n) {
				x++;
			}
		}
		cout<<x<<endl;
	}
}

