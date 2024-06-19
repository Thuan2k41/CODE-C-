#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int arr[n];
		multimap <int,int> mp;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			int d=abs(x-arr[i]);
			mp.insert({d,arr[i]});
		}
		for(auto it:mp){
			cout<<it.second<<' ';
		}
		cout<<endl;
	}
}
