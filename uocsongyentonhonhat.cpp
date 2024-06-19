#include <bits/stdc++.h>
using namespace std;
void check(int n){
	int x=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			x=1;
			cout<<i<<" ";
			break;
		}
	}
	if(x==0) cout<<n<<' ';
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i =1;i<=n;i++){
			if(i<=3){
				cout<<i<<' ';
			}else{
				check(i);
			}
			
		}
		cout<<endl;
	}
}

