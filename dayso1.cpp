#include <bits/stdc++.h>
using namespace std;
void Try(int &n,int arr[]) {
	for(int i=1; i<=n-1; i++) {
		arr[i]=arr[i+1]+arr[i];
	}
	n=n-1;
	cout<<"[";
	for(int i=1; i<=n; i++) {
		if(i!=n) {
			cout<<arr[i]<<' ';
		} else {
			cout<<arr[i];
		}
	}
	cout<<"]";
	cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=1; i<=n; i++) {
			cin>>arr[i];
		}
		cout<<"[";
		for(int i=1; i<=n; i++) {
			if(i!=n) {
				cout<<arr[i]<<' ';
			} else {
				cout<<arr[i];
			}
		}
		cout<<"]";
		cout<<endl;
		while(n!=1) {
			Try(n,arr);
		}
	}
}
