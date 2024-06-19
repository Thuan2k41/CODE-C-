#include <bits/stdc++.h>
using namespace std;
int n,m,u,v,x,y,ok;
vector <vector<int>> g;
vector <int> vs;
vector <int> arr;
void dfs(int s,int count){
	for(auto it: g[s]){
		if(count ==v){
			ok=1;
			//vs[it]=0;
			return;
		}else{
			vs[it]=1;
			dfs(it);
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>m;
		ok=0;
		g.clear(), vs.clear();
		g.resize(n+1);
		vs.resize(n+1,0);
		while(m--) {
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		
	}
}

