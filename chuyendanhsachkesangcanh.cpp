#include <bits/stdc++.h>
using namespace std;
set <pair<int,int>> set1;
int main() {
	int n;
	cin>>n;
	cin.ignore();
	for(int i=1; i<=n; i++) {
		string s;
		getline(cin,s);
		stringstream ss(s);
		string word;
		while(ss>>word) {
			if(stoi(word)>i) {
				set1.insert({i,stoi(word)});
			}
		}
	}
	for(auto it:set1) {
		cout<<it.first<<' '<<it.second<<endl;
	}
}
