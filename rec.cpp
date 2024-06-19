#include <bits/stdc++.h>
using namespace std;
long long maxS(int a[],int n){
	stack <int> L,R;
	int l[n],r[n];
	for(int i=0;i<n;i++){
		while(!L.empty()&& a[L.top()]>=a[i]){
			L.pop();
		}
		if(L.empty()){
			l[i]=0;
		}else{
			l[i]=L.top()+1;
		}L.push(i);
	}
	for(int i=n-1;i>=0;i--){
		while(!R.empty()&& a[R.top()]>=a[i]){
			R.pop();
		}if(R.empty()){
			r[i]=n-1;
		}else{
			r[i]=R.top()-1;
		}R.push(i);
	}
	long long res=0;
	for(int i=0;i<n;i++){
		res =max (res,(long long )(r[i]-l[i]+1)*a[i]);
	}
	return res;
}
int main(){
	int m,n; cin>>m>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=m-a[i];
	}
	cout<<max(maxS(a,n),maxS(b,n))<<endl;
}

