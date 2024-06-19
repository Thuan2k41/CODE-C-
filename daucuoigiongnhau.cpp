#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int x=s.size();
		for(int i=0;i<s.size();i++){
			for(int j=i+1;j<s.size();j++){
				if(s[i]==s[j]){
					x++;
				}
			}
		}
		cout<<x<<endl;
	}
}

