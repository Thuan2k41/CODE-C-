#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s;
		cin>>s;
		int x=0;
		stack <char> st;
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='(') {
				st.push(s[i]);
			}
			if(s[i]==')'&& !st.empty()) {
				st.pop();
				x+=2;
			}
		}
		if (st.empty()) {
			cout << s.length();
			return 0;
		} else
			cout<<x<<endl;
	}
}


