#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n; int arr[n];
		
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			if(i>1) arr[i]+=arr[i-1];
		}
		int k=0;
		for(int i =2;i<=n-1;i++){
			int x=arr[i-1];
			int y = arr[n]-arr[i];
			//cout<<x<<" "<<y;
			if(x==y) {
				cout<<i<<endl;
				k=1;
				break;
			}
		}
		if(k==0) cout<<-1<<endl;
	}
}

