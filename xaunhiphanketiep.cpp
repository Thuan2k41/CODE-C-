#include <bits/stdc++.h>
using namespace std;
string check(string s){
	int x= s.size()-1;
	while(s[x]=='1'){
		s[x]-=1;
		x--;
	}
	if(x!=0){
		s[x]= '1';
	}
	return s;
}
int main (){
	int  n;
	cin>>n;
	cin.ignore();
	while(n--){
		string s;
		cin>>s;
		cout<<check(s)<<endl;
	}
}
