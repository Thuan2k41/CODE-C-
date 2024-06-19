#include <bits/stdc++.h>
using namespace std;
string min(string s){
	for(int i =0;i<s.size();i++){
		if(s[i]=='5') s[i]='6';
	}
	return s;
}
string max(string s){
	for(int i =0;i<s.size();i++){
		if(s[i]=='6') s[i]='5';
	}
	return s;
}
int main(){
	string s;
	getline(cin,s);
	string count="0";
	stringstream ss(s);
	int arr[4];
	int i=0;
	
	while(ss>>count){
		arr[i++]=stoll(min(count));
		arr[i++]=stoll(max(count));
		count="0";
	}
	cout<<arr[1]+arr[3]<<' '<<arr[0]+arr[2];
}
