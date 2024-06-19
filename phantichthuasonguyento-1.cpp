#include <iostream>
using namespace std;
void check(int n) {
	for(int i=2; i<=n; i++) {
		int a=0;
		if(n%i==0) {
			while(n%i==0) {
				a++;
				n/=i;
			}
		}
		if(a!=0) {
			cout<<i<<" "<<a<<" ";
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		check(n);
		cout<<endl;
	}
}

