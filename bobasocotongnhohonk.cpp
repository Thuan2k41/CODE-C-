#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long res=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				res += lower_bound(a+j+1,a+n,k-a[i]-a[j]) -(a+j+1);
				//vij tri x - vi
			}
		}
		cout<<res<<endl;
	}
}

