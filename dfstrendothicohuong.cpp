#include <bits/stdc++.h>
using namespace std;
int a,b,m;
int check[1000];
vector <int> v[1001];
void dfs(int u){
	cout<<u<<' ';
	check[u]=true;
	for(int it : v[u]){
		if(check[it]==false)	dfs(it);
	}
}
int main() {
	int t;cin>>t;
	while(t--){
		 cin>>a>>b>>m;
		while(b--){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			//v[y].push_back(x);	
		}
		for(int i=1;i<=a;i++){
			for(auto it: v[i]){
				cout<<it<<' ';
			}
			cout<<endl;
		}
	}
}


