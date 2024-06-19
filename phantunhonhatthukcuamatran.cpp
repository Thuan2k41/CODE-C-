#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int arr[n*n];
		for(int i=0;i<n*n;i++){
				cin>>arr[i];
		}
		sort(arr,arr+n*n);
		cout<<arr[x-1]<<endl;
	}
}

