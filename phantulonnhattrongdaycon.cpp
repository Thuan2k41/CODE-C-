#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n>>a;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			
		}
		for(int i=0;i<n-a+1;i++){
			int max=arr[i];
			for(int j=i;j<i+a;j++){
				if(max<=arr[j]){
					max=arr[j];
				}
			}
			cout<<max<<' ';
		}
		cout<<endl;
	}
} 
