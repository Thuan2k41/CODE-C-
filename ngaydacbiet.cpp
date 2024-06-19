#include <bits/stdc++.h>
using namespace std;
string s="00000000";
set <string> se;
void check(){
	int d= stoi(s.substr(0,2));
	int m=stoi(s.substr(2,2));
	int y=stoi(s.substr(4,4));
	if(d>0 && m>0 &&m<=12 && y>=2000){
		string tmp = s;
		tmp.insert(2,"/");
		tmp.insert(5,"/");
		se.insert(tmp);
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j==0) s[i]='0';
		else s[i]='2';
		if(i==7) check();
		else Try(i+1);
	}
}
int main(){
	Try(0);
	for(auto it: se){
		cout<<it<<endl;
	}
}
