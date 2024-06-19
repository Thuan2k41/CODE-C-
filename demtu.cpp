#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	
	while(t--){
		string s;
		getline(cin,s);
		int i=0;
		stringstream ss(s);
		string word;
		while(ss >> word){
			i++;
		}
		
		cout<<i<<endl;
	} 
}

