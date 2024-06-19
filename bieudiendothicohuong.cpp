#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
		int n,a;
		cin>>n>>a;
		vector <int> arr[n+1];
		for(int i=1;i<=a;i++){
			int x,y;
			cin>>x>>y;
			arr[x].push_back(y);
		}
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
			for(int v:arr[i]){
				cout<<v<<" ";
			}
			cout<<endl;
		}
	}
}
