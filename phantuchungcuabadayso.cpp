#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		ll arr[a],brr[b],crr[c],drr[a+b+c];
		for(ll &x:arr){
			cin>>x;
		} 
		for(ll &z:brr){
			cin>>z;
		} 
		for(ll &y:crr){
			cin>>y;
		} 
		int h=0,k=0;
		for(int i=0;i<a;i++){
		    for(int j=0;j<b;j++){
			    if(arr[i]==brr[j]){
			    	drr[h++]=arr[i];
				}
			} 
		}
		set<ll> s;
		
		for(int i=0;i<c;i++){
		    for(int j=0;j<h;j++){
			    if(drr[j]==crr[i]){
			    	k=1;
			    	s.insert(drr[j]);
				}
			} 
		}
		for(ll it:s){
			cout<<it<<" ";
		}
		if(k==0) cout<<-1;
		cout<<endl;	
	}
}

