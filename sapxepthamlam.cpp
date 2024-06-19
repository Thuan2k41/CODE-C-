#include <bits/stdc++.h>
using namespace std;
int check(int n,int arr[],int brr[]) {
	for(int i=1; i<=n; i++) {
		if(arr[i]!=brr[i] && arr[i]!=brr[n-i+1]) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n+1],brr[n+1];
		for(int i=1; i<=n; i++) {
			cin>>arr[i];
			brr[i]=arr[i];
		}
		sort(brr+1,brr+n+1);
		
		if(check(n,arr,brr)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
