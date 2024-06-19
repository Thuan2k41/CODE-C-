#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; while(t--){
		int n;cin>>n;
		long long a[n][n];
		long long sum=0,max;
		for(int i=0;i<n;i++){
			max=0;
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				if(max<a[i][j]) max=a[i][j];
			} sum+=max;
		}
		cout<<sum<<endl;
	}
} 
