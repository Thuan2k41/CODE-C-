#include <bits/stdc++.h>
using namespace std;
bool check1(string s) {
	for(int i=0; i<s.size()-1; i++) {
		if(s[i]>=s[i+1]) return 0;
	}
	return 1;
}
bool check2(string s) {
	for(int i=0; i<s.size(); i++) {
		if(s[i]!=s[0]) return 0;
	}
	return 1;
}
bool check3(string s) {
	if(s[1]==s[0]&&s[1]==s[2]&&s[3]==s[4]) return 1;
	return 0;
}
bool check4(string s) {
	for(int i=0; i<s.size(); i++) {
		if(s[i]!='6' && s[i]!='8') return 0;
	}
	return 1;
}
int main() {
	int c;
	cin>>c;
	set <int>s;
	for(int j=0; j<c; j++) {
		int x;
		cin>>x;
		s.insert(x);

	}
	for(int it:s){
		cout<<it<<' ';
	}
}

