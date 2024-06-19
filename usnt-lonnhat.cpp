#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n,x=0;
		cin>>n;
		for(int i=2; i<=sqrt(n); i++) {
			while(n%i==0) {
			//	cout<<i<<' ';
				n/=i;
				x=i;
			}
		}
		//cout<<x<<" ";
		if(n>1) x=n;
		cout<<x<<endl;

	}
}


