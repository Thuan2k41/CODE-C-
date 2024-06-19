#include <bits/stdc++.h>
using namespace std;
int n,a,m;
int check[1001] ;
	vector <int> arr[1001];
void dfs(int u,int check[], vector<int> arr[]) {
	cout<<u<<" ";
	check[u]=true;
	for(int v: arr[u]) {
		if(check[v]==false) {
			dfs(v,check,arr);
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>a>>m;
		
	
		for(int i=1; i<=a; i++) {
			int x,y;
			cin>>x>>y;
			arr[x].push_back(y);
			arr[y].push_back(x);
		}
		for(int i=2;i<=a;)
	}
}
