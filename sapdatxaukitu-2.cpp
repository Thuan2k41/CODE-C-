#include <bits/stdc++.h>
using namespace std;
// ki tu nhieeuf nhat 
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> map;
		for(int i=0;i<s.size();i++){
			map[s[i]]++;
		}
		int max=0;
		for(auto it:map){
			if(max<it.second){
				max=it.second;
			}
		}
		int x=max-1;
		if((s.size()+1)/2 >=max){
			cout<<1<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
}

