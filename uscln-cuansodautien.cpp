#include <iostream>
using namespace std;
#define ll long long
ll GCD(ll a,ll b) {
	if(a==0||b==0) return a+b;
	ll tich=a*b;
	while(a!=0) {
		int x=a;
		a=b%a;
		b=x;
	}
	return tich/b;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll a,x=1;
		cin>>a;
		for(int i=1; i<=a; i++) {
			x=GCD(i,x);
			
		}
		cout<<x<<endl;
	}
}

