#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int x;
		set<int> v;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			int x=arr[i];
			int a=0;
			while(x!=0){
				a=x%10;
				v.insert(a);
				x/=10;
			}
		}
		for(auto t : v) cout<<t<<" ";
		cout<<endl;
	}
}

