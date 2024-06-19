#include <bits/stdc++.h>
using namespace std;
int n,k,u,v,ok,x,y;
vector <vector<int>> G;
vector <int> vs;
void bfs(int s) {
	queue <pair<int,int>> q;
	q.push({s,0});
	vs[s]=1;
	while(!q.empty()){
		x = q.front().first;
		y=q.front().second;
		q.pop();
		for(auto it: G[x]){
			if(vs[it] ==0 ){
				q.push({it,x});
				vs[it]=1;
			}else{
				if(it != y){
					ok=1;
					return ;
				}
			}
		}
	}
}
int main() {
	int t; cin>>t;while(t--){
		cin>>n>>k;
	vs.clear();
	
	ok=0;
	vs.resize(n+1,0);
	G.clear();
	G.resize(n+1);
	while(k--) {
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
		if(vs[i]==0){
			bfs(i);
		}if(ok )break;
	} 
	if(ok ) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}
}

