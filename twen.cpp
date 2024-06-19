#include <bits/stdc++.h>
using namespace std;
int check(int i){
	if(i<2) return 0;
	for(int j=2;j<=sqrt(i);j++){
		if(i%j==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<=n/2;i++){
			if(check(i)&&check(n-i)){
				cout<<i<<' '<<n-i<<endl;
				break;
			} 
		}
	}
}

