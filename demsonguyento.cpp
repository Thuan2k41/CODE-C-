#include <bits/stdc++.h>
using namespace std;
int check(int n){
	if(n<2) return 0;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(check(i)) cnt++;
		}
		cout<<cnt<<endl;
	}
}

