#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string x[100],word;
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	//vector<string> v;
	stringstream ss(s);
	int a=0;
	while(ss>>word){
		word[0]=toupper(word[0]);
		x[a++]=word;
		
		
	}
	for(int i=0;i<a-1;i++){
		cout<<x[i];
		if(i<a-2){
			cout<<" ";
		}else cout<<", ";
	}
	for(int i=0;i<x[a-1].size();i++){
		x[a-1][i]=toupper(x[a-1][i]);
	}
	cout<<x[a-1];
}

