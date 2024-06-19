#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n+1];
		arr[0]=0;
		for(int i=1; i<=n; i++) {
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=2; i<=n; i++) {
			if(i%2==1){
				if(arr[i]<=arr[i-1]){
					cout<<arr[i-1]<<" ";
				}else{
					swap(arr[i],arr[i-1]);
					cout<<arr[i-1]<<" ";
				}
			}else{
				if(arr[i]>=arr[i-1]){
					cout<<arr[i-1]<<' ';
				}else{
					swap(arr[i],arr[i-1]);
					cout<<arr[i-1]<<' ';
				}
			}
		}
		cout<<arr[n];
		cout<<endl;
	}
}

