#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	vector<string> v;
	stringstream ss(s);
	string word;
	while(ss>>word){
		v.push_back(word);
	}
	cout<<v[v.size()-1];
	for(int i=0; i< v.size()-1; i++){
		cout<<v[i][0];
	}
	cout<<"@ptit.edu.vn";
		
}

