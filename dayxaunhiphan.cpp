#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a[94];
	a[1]=1,a[2]=1;
	for(int i=3;i<=93;i++){
		a[i]=a[i-2]+a[i-1];
	}
	int t; cin>>t; while(t--){
		long long n,k; cin>>n>>k;
		while(1){
			if(n==1){
				cout<<0<<endl;
				break;
			} if(n==2){
				cout<<1<<endl;
				break;
			} if(k>a[n-2]){
				k-=a[n-2];
				n--;
			}else{
				n-=2;
			}
		}
	}
}
