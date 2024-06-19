#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1],ans=0;
		int l[100001]={0},r[100001]={0};
		for(int i=1;i<=n;i++){
			cin>>a[i];
			l[i]=a[i]+l[i-1];
		}
		for(int i=n;i>=1;i--){
			r[i]=r[i+1]+a[i];
			//cout<<r[i]<<"  ";
		}
		cout<<endl;
		for(int i=1;i<n;i++){
			//cout<<l[i]<<' ';
			if(l[i]==r[i]){
				
				ans=1;
				cout<<i<<endl;
				break;
			}
		}
		if(ans==0) cout<<-1<<endl;
	}
}

