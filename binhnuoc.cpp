#include <bits/stdc++.h>
using namespace std;
int par[100005];
int find(int u){
	if(u== par[u]){
		return u;
	}return find(par[u]);
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<=100000;i++){
		par[i]=i;
	}
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		x=find(x);
		y=find(y);
		if(z==1){
			if(x!=y){
				par[y]=x;
			}
		}else{
			if(x==y) cout<<1<<endl;
			else cout<<0<<endl;
		}
	}
}

