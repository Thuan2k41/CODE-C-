#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int arr[n];
		int d=0;
		set <int> s;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]+arr[j]==x){
					d++;
				}
			}
		}
		cout<<d<<endl;
	}
}
