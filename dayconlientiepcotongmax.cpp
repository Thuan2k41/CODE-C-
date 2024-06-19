#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; while(t--){
		int n; cin>>n;  int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int s=0,ans=0;
		for(int i=1;i<=n;i++){
			s+=a[i];
			ans=max(ans,s);
			if(s<0){
				s=0;
			}
		}
		cout<<ans<<endl;
	}
}
