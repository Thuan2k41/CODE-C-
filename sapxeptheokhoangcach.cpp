#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int arr[n];
		multimap<int,int> m;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			int z=abs(arr[i]-x);
			m.insert({z,arr[i]});
		}
		for(auto it:m){
			cout<<it.second<<' ';
		}
		cout<<endl;
	}
}

