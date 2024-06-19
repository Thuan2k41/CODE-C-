#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s; cin>>s;
		int d=0;
		stack <char> st;
		for(int i=0;i<s.size();i++){
			if(s[i]==')' && !st.empty()){
				st.pop();
				d+=2;
			}
			if(s[i]=='(') st.push(s[i]);
		}
		cout<<d<<endl;
	}
}

