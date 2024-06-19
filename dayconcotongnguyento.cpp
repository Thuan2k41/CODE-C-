#include <bits/stdc++.h>
using namespace std;
int n,a[16];
vector <int> s;
vector<vector<int>> res;
int snt(int o) {
	if((o<2) ) return 0;
	{
		for(int i=2; i<=sqrt(o); i++) {
			if(o%i==0) return 0;
		}
	}
	return 1;
}
void check() {
	int sum=0;
	for(int r:s) {
		sum+=r;
	}
	if (snt(sum)) {
		for(int l:s) cout<<l<<' ';
		cout<<endl;
	}
}
void Try(int i) {
	for(int j=0; j<=1; j++) {
		if(j==1)  s.push_back(a[i]);
		if (i==n) check();
		else Try(i+1);
		if(j==1) s.pop_back();
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		s.clear();
    res.clear();
		for(int i=1; i<=n; i++) {
			cin>>a[i];
		}
		sort(a+1,a+1+n,greater<int>());
		Try(1);
		
	}
}
