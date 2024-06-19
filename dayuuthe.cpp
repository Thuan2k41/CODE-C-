#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int x=0,c=0,l=0;
		string so;
		stringstream ss(s);
		while(ss>>so){
			x++;
			if((so[so.size()-1]-'0')%2==0){
				c++;
				
			}else l++;
		}
		if(x%2==0&&c>l) cout<<"YES"<<endl;
		else if (x%2!=0&&l>c) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

