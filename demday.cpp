#include <bits/stdc++.h>
using namespace std;
long long mod= 123456789;
// 3=== 4 == 2^(n-1)
long long luy(long long t,long long k){
	if(k==0 ) return 1;
	long long x= luy(t,k/2);
	if(k%2==0) return (x*x)%mod;
	else return t*(x*x%mod)%mod;
} 
int main(){
	int t;cin>>t;
	while(t--){
		long long n; cin>>n;
		cout<<luy(2,n-1);
		cout<<endl;
	}
}
