#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int x=n,sum=0;
	for(int i=2;i<sqrt(x);i++){
		if(x%i==0){
			while(x%i==0){
				sum+=i;
				x/=i;
			}
		}
	}
	return sum;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<check(n)<<endl;
	}
}

