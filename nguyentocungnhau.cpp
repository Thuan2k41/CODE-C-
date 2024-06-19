#include <bits/stdc++.h>
using namespace std;
int checksnt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int check(int a,int b){
	while(a!=0){
		int x=a;
		a=b%a;
		b=x;
	}
	return b;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int d=0;
		for(int i=2;i<n;i++){
			if(check(i,n)==1) cout<<i<<' ';
		}
		if(checksnt(d)) cout<<1<<endl;
		else cout<<0<<endl;
	}
}

