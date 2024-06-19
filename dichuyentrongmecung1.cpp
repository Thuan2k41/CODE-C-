#include <bits/stdc++.h>
using namespace std;
int n, a[11][11];
vector <string> str;
int ok;
void Try(int i,int j, string s) {
	if(a[1][1]==0 || a[n][n]==0) {
		//cout<<"-1"<<endl;
		ok = false;
		return ;
	}
	if(i==n&& j==n) {
		str.push_back(s);
		ok = true;
		return ;
	}
	if(i<n && a[i][j]) {
		Try(i+1,j,s+'D');
	}
	if(j<n &&a[i][j]) {
		Try(i,j+1,s+'R');
	}
	if(i<n &&j<n && !(a[i+1][j]&& a[i][j+1]) || i> n|| j>n) {
		return ;
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
				cin>>a[i][j];
			}
		}
		str.clear();
		ok=true;
		Try(1,1,"");
		if(ok==false) {
			cout<<-1;
		} else {
			sort(str.begin(),str.end());
			for(auto it: str) {
				cout<< it<<' ';
			}
		}
		cout<<endl;
	}
}
