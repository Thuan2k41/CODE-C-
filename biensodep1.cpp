#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(string s) {
	if(s[5]<s[6]&&s[6]<s[7]&&s[7]<s[9]&&s[9]<s[10]) return 1;
	return 0;
}
int check1(string s) {
	if(s[5]==s[6]&&s[6]==s[7]&&s[9]==s[10]) return 1;
	return 0;
}
int check2(string s) {
	if((s[5]!='6'&&s[5]!='8')||(s[6]!='6'&&s[6]!='8')||(s[7]!='6'&&s[7]!='8')||(s[9]!='6'&&s[9]!='8')||(s[10]!='6'&&s[10]!='8')) return 0;
	return 1;
}
int main() {
	ios::sync_with_stdio(false) ;
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		if(check(s)||check1(s)||check2(s)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
