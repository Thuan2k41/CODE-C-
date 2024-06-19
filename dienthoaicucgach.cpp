#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	cin.ignore();
	while(n--) {
		string s,m;
		int max=0,x=0;
		cin>>s;
		for(int i=0; i<s.size(); i++) {
			if(s[i]>='0'&&s[i]<='9') {
				m+=s[i];
				if(s[i+1]>='0'&&s[i+1]<='9' ) {

				} else {
					x=stoll(m);
					if(x>max) {
						max=x;
					}
				}
			} else {
				m="";
			}
		}
		cout<<max<<endl;

	}
}

