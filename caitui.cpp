#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; 
	while(t--){
		int n,s; cin>>n>>s;
		int w[n+1], v[n+1], x[n+1][s+1];
		
		for(int i=1;i<=n;i++){
			cin>>v[i];
		}
		for(int i=1;i<=n;i++) cin>>w[i];
		memset(x,0,sizeof(x));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=s;j++){
				x[i][j]=x[i-1][j];
				if(j>=v[i]){
					x[i][j]= max(x[i][j],x[i-1][j-v[i]]+w[i]);
				}
			}
		}
		cout<<x[n][s]<<endl;
	}
}
