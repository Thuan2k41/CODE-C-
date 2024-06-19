#include <bits/stdc++.h>
using namespace std;
int n, d[100],d1[100],ans=0,c[110],x[110];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(c[j]==0 && d[i+j-1]==0 && d1[i-j+n]== 0){
		//	x[i]=j;
			c[j]=d[i+j-1]=d1[i-j+n]= 1;
			if(i==n){
				ans++;
			}else Try(i+1);
			c[j]=d[i+j-1]=d1[i-j+n]= 0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		 cin>>n;
		 ans=0;
		 memset(d,0,sizeof(d));
		 memset(d1,0,sizeof(d1));
		 memset(c,0,sizeof(c));
		Try(1);
		cout<<ans<<endl;
	}
}
