#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--) {
		string s;
		cin>>s;
		int i=s.size()-1;
		while(s[i]=='0') {
			i--;
		}
		if(i==-1) {
			for(int i=0; i<s.size(); i++) {
				cout<<1;
			}
		} else {
			s[i]='0';
			for(int j=i+1; j<s.size(); j++) {
				s[j]='1';
			}
			cout<<s;
		}

		cout<<endl;
	}
}
