#include <bits/stdc++.h>
using namespace std;
int n,m,check[1001];
vector<int> v[1001];
queue <int> q;
void dfs(int u){
	check[u]=true;
	q.push(u);
	while(!q.empty()){
		int s=q.front(); q.pop();
		for(auto it: v[s]){
			if(check[it]==false){
				check[it]=true;
				q.push(it);
			}
		}
	}
}
void check1(){
	int ans=0;
	for(int i=1;i<=n;i++){
		{
			if(check[i]==false){
				++ans;
				dfs(i);
			}
		}
	}
	cout<<ans;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>m;
		while(m--){
			int x,y;
			cin>>x>>y;
			v[y].push_back(x);
			v[x].push_back(y);
		}
		memset(check,false,sizeof(check));
		check1();
		cout<<endl;
		memset(v,false,sizeof(v));
	}
}
