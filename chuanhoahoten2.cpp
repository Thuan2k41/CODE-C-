#include <bits/stdc++.h>
using namespace std;
string chuan1(string s){
	string word,m;
	stringstream ss(s);
	while(ss>>word){
		word[0]=toupper(word[0]);
		for(int i=1;i<word.size();i++){
			word[i]=tolower(word[i]);
		}
		m+=" "+word;
	}
	m.insert(0,word);
	m.erase(m.size()-word.size(),word.size());
	return m;
}
string chuan2(string s){
	string word,m,z;
	stringstream ss(s);
	ss>>word;
	word[0]=toupper(word[0]);
		for(int i=1;i<word.size();i++){
			word[i]=tolower(word[i]);
		}
	m+=word;
	while(ss>>word){
		word[0]=toupper(word[0]);
		for(int i=1;i<word.size();i++){
			word[i]=tolower(word[i]);
		}
		z+=word+" ";
	}
	m=z+m;
	return m;
}
int main(){
	int n; cin>>n;
	while(n--){
		int x;
		cin>>x;
		cin.ignore();
		string s;
		getline(cin,s);
		if(x==1){
			cout<<chuan1(s)<<endl;
		}else{
			cout<<chuan2(s)<<endl;
		}
	}
}
