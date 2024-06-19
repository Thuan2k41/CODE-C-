#include <bits/stdc++.h>
using namespace std;
int check(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,d=0; cin >>n;
		for(long long i=2;i<=sqrt(n);i++){
			if(check(i)){
				d++;
			}
		}
		cout<<d<<endl;
	}
}

