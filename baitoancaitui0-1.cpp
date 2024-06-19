#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t; while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+1],c[n+1],x[n+1][n+1];
		memset(a,0,sizeof(a));
		memset(c,0,sizeof(c));
		memset(x,0,sizeof(x));
		int ans;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>c[i];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=k;j++){
				x[i][j]= x[i-1][j];
				if(j>=a[i]){
					x[i][j]=max(x[i][j],x[i-1][j-a[i]]+c[i]);
				}
			}
		}
		cout<<x[n][k]<<endl;
	}
}
