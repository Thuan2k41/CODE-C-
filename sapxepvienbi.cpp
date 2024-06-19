#include <bits/stdc++.h>
using namespace std;
int main() {
	while(1){
		
	int n,d=0;
	string s;
	cin >> n >> s;
	int dx = 0, dt = 0, dd = 0;
	for (auto i : s) {
		if (i == 'X')
			dx++;
		else if (i == 'T')
			dt++;
		else
			dd++;
	}
	for(int i=0; i<dx; i++) {
		if(s[i]!='X') {
			for(int j=s.size()-1; j>=dx; j--) {
				if(s[j]=='X') {
					swap(s[i],s[j]);
					d++;
					break;
				}
			}
		}
	}
	//cout<<s<<d<<endl;
	for(int i=dx; i<(dx+dt); i++) {
		if(s[i]!='T') {
			for(int j=s.size()-1; j>=(dx+dt); j--) {
				if(s[j]=='T') {
					swap(s[i],s[j]);
					d++;
					break;
				}
			}
		}
	}
	//cout<<s<<endl;
	cout<<d<<endl;

	}
}
