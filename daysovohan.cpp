#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long a[2][2],b[2][2];
void nhan(long long c[2][2], long long d[2][2]){
	long long x = c[0][0]*d[0][0]%mod+ c[0][1]*d[1][0]%mod ;
	long long y = c[0][0]*d[0][1]%mod + c[0][1]*d[1][1]%mod;
	long long z= c[1][0]*d[0 ][0]%mod + c[1][1]*d[1][0]%mod;
	long long t= c[1][0]*d[0][1]%mod + c[1][1]*d[1][1]%mod;
	a[0][0]=x%mod, a[0][1]=y%mod, a[1][0]=z%mod, a[1][1]=t%mod;
}
void luy (long long n){
	if(n<=1 ) return ;
	luy(n/2);
	nhan(a,a);
	if(n%2==1){
		nhan(a,b);
	}
}
int main(){
	int t; cin>>t; 
	while(t--){
		long long n; cin>>n;
		
		a[0][0]= a[0][1]= a[1][0]= 1 ; a[1][1]=0;
		b[0][0]= b[0][1]= b[1][0]=1 ; b[1][1]=0;
		luy(n-1);
		cout<<a[0][0]<<endl;
	}
} 
