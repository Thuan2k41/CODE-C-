#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int &i:arr){
			cin>>i;
		}
		sort(arr,arr+n,greater<int>());
		int x;
		if(n%2!=0){
			x=n/2+1;
		}else x=n/2;
		for(int i=0;i<x;i++){
			if(i==x-1&&n%2!=0){
				cout<<arr[i];
			}else{
				cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
			}
			
		}
		cout<<endl;
	}
}

