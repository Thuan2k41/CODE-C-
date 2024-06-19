#include <bits/stdc++.h>
using namespace std;
int n,a[16];
vector <int> p;
vector <vector<int>> v;
void display(){
	int sum=0;
	for(int i:p) sum+=i;
	if(sum%2==1){
		for(int i:p) cout<<i<<' ';
		cout<<endl;
	}
	
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j==1) p.push_back(a[i]);
		if(i==n) display();
		else Try(i+1);
		if(j==1 ) p.pop_back();
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1,greater<int>());
		Try(1);
	}
}
