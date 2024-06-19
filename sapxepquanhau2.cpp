#include <bits/stdc++.h>
using namespace std;
int n,a[9][9],d[21],d1[21],ans,c[9],m;
void Try(int i){
	for(int j=1;j<=n;j++){
		if(c[j]==0&& d[i-j+8]==0 && d1[i+j-1]==0){
			ans+=a[i][j];
			c[j]= d[i-j+8]= d1[i+j-1]=1;
			if(i==8){
				m=max(m,ans);
			}else{
				Try(i+1);
			}
			ans-=a[i][j];
			c[j]= d[i-j+8]= d1[i+j-1]=0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		n=8;
		memset(d,0,sizeof(d));
		memset(d1,0,sizeof(d1));
		memset(c,0,sizeof(c));
		ans=0,m=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		Try(1);
		cout<<m<<endl;
	}
}
