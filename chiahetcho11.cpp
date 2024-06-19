#include <bits/stdc++.h>
using namespace std;
void sum(string s){
	int c=0,l=0;
	for(int i=0;i<s.size();i++){
		if(i%2==0){
			c+=s[i]-'0';
		}else{
			l+=s[i]-'0';
		}
	}
	if((c-l)%11==0) cout<<'1'<<endl;
	else cout<<"0"<<endl;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		sum(s);
	}
}

