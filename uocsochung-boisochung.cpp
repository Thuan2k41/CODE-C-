#include <iostream>
using namespace std;
#define ll long long
ll GCD(ll a,ll b){
	if(a==0||b==0) return a+b;
	while(a!=b){
		if(a>b){
			a-=b;
		}else b-=a;
	}
	return a;
}
ll LCM(ll tich,ll uoc){
	return tich/uoc;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll tich=a*b;
		ll uoc=GCD(a,b);
		cout<<LCM(tich,uoc)<<" "<<GCD(a,b)<<endl;
	}
}

