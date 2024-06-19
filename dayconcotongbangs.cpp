#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n+1],dp[k+5];
		for(int i=1;i<=n;i++) cin>>a[i];
		
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=k;j>=a[i];j--){
				if(dp[j-a[i]]==1){
					dp[j]=1;
				}
			}
		}
		if(dp[k]==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

