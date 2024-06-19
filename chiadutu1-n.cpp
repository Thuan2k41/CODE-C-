#include <iostream>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		ll k,sum=0;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			sum+=i%k;
		}
		if(sum==k) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}

