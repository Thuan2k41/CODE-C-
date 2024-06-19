#include <bits/stdc++.h>
using namespace std;
bool check1(string s){
	for(int i=0;i<s.size()-1;i++){
		if(s[i]>=s[i+1]) return 0;
	}
	return 1;
}
bool check2(string s){
	for(int i=0;i<s.size()-1;i++){
		if(s[i]!=s[i+1]) return 0;
	}
	return 1;
}
bool check3(string s){
	if(s[1]==s[0]&&s[1]==s[2]&&s[3]==s[4]) return 1;
	return 0;
}
bool check4(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]!=6||s[i]!=8) return 0;
	}
	return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin.ignore();
		string u;
		getline(cin,u);
		string c=u.substr(5,6);
		c.erase(3,1);
		if(check1(c)||check2(c)||check3(c)||check4(c)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

