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
		for(int i=n-1;i>=n/2+1;i--){
			
			cout<<arr[i]<<' '<<arr[n-1-i]<<' ';
		}
		if(n%2==1){
			cout<<arr[n/2];
		}else{
			cout<<arr[n/2]<<' '<<arr[n-1-n/2]<<' ';
		}
		cout<<endl;
	}
}
