#include <bits/stdc++.h>
using namespace std;
int n, a[16][16], check[16], m=INT_MAX,d=0,ans=INT_MAX,x[16];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(check[j]==0){
			x[i]=j;
			check[j]=1;
			d+=a[x[i-1]][x[i]];
			if(i==n){
				ans=min(ans,d+a[x[i]][1]);
				
			}else if(d +(n-i+1)*m <ans){
				Try(i+1);
			}
			d-=a[x[i-1]][x[i]];
			check[j]=0;
		}
	}
	
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]!=0) m=min(m,a[i][j]);
		}
	}
	memset(check,0,sizeof(check));
	check[1]=1;
	x[1]=1;
	Try(2);
	cout<<ans;
}
