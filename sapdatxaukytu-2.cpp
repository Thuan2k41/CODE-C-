#include <bits/stdc++.h>
/// aaabbb babab 5 3 
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n; cin>>n;
		string s;
		cin>>s;
		map <char,int> m;
		for(int i=0;i<s.size();i++){
			m[s[i]]++;
		}
		auto it =m.rbegin();
		//cout<<it->second; 
		if((it->second*n-1)<=s.size()) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}
