#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		int arr[n],brr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			brr[i]=arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n;i++){
			if(arr[i]!=brr[i]){
				cout<<i+1<<' ';
				break;
			}
		
		}
		for(int i=n-1;i>=0;i--){
			if(arr[i]!=brr[i]){
				cout<<i+1<<' ';
				break;
			}
			
		}
		cout<<endl;
	}
}
