#include <iostream>
#include <math.h>
using namespace std;
int check(int n) {
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) return 0;
	}
	return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		int a=0;
		for(int i=2;i<=n;i++){
			if(n%i==0){
				while(n%i==0){
				    a++;
				    n/=i;
				    if(a==x) cout<<i<<endl;
				}
			}
		}
		if(x>a) cout<<"-1"<<endl;
		
	}
}


