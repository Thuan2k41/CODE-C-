#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		string c[1000];
		int x=0;
		getline(cin,s);
		stringstream ss(s);
		string word;
		while(ss>>word){
			c[x++]=word;
		} 
		for(int i=x-1;i>=0;i--){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	} 
}

