#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int x=0;
		for(int i=0;i<n-1;i++){
			int z=arr[i+1]-arr[i];
			if(z>1){
				x+=(z-1);
			}
		}
		cout<<x<<endl;
	} 
}

