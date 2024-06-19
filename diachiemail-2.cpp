#include <bits/stdc++.h>
using namespace std;
map<string,int> mp;
int main() {
	int n;
	cin>>n;
	cin.ignore();
	while(n--) {
		string s;
		getline(cin,s);
		stringstream ss(s);
		string word,m;
		while(ss>>word) {
			m+=tolower(word[0]);
		}
		m.erase(m.size()-1,1);
		for(int i = 0 ; i < word.size() ; i++) {
			word[i] = tolower(word[i]);
		}
		mp[word]++;
		m.insert(0,word);
		for(auto it:mp) {
			if(it.first== word ) {
				if(it.second==1) {
					cout << m << "@ptit.edu.vn" << endl ;
					break;
				}
				else {
					cout <<m << it.second <<"@ptit.edu.vn" << endl ;
					break;
				}
			}
		}
	}
}
