#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long check(int a,int b) {
	while(a!=0) {
		ll x=a;
		a=b%a;
		b=x;
	}
	return b;
}
long long count(int n) {
	ll count=0;
	while(n!=0) {
		n/=10;
		count ++;
	}
	return count;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll x,y,z,n;
		cin>>x>>y>>z>>n;
		ll a=x*y/check(x,y);
		ll b=z*a/check(a,z);
		ll k=pow(10,n-1);
		if(count(b)>n) {
			cout<<-1<<endl;
		} else {
			ll x=k/b;
			if(x*b==k) cout<<k<<endl;
			else
			cout<<(x+1)*b<<endl;
		}

	}
}

