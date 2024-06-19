#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>> t;
	while(t--) {
		cin.ignore();
		int n;
		cin>>n;
		string s1;
		if(n==101) {
			s1="ABBADCCABDCCABD";
		} else {
			s1="ACCABCDDBBCDDBB";
		}
		//cout<<s1[0]<<' ';
		string s;
		getline(cin,s);
		stringstream ss(s);
		char word;
		int cnt=0,x=0;
		while(ss>>word) {
			if(s1[x] == word){  
			 cnt++;
			}
			x++;
		}
		float point = 10/15*cnt;
		cout<<fixed<<setprecision(2)<<point<<endl;

	}
}

