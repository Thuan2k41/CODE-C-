#include <bits/stdc++.h>
using namespace std;
void solve2(){
	int n,q;
	cin>>n>>q;
	int a[n];
	int r[n];
	for(auto &x: a){
		cin>>x;
	}
	stack <int> st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && a[i]>= a[st.top()]){
			st.pop();
		}
		if(st.empty()){
			r[i] =-1;
		}else {
			r[i]=st.top();
		}
		st.push(i);
	}
	while(q--){
		int x;
		cin>>x;
		x--;
		int cnt=0;
		while(x!=-1){
			cnt++;
			x=r[x];
			
		}
		cout<<cnt-1<<endl;
	}
}
int main(){
	solve2();
}

