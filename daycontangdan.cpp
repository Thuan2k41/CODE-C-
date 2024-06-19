#include <bits/stdc++.h>
using namespace std;
int n,a[21];
vector <int> s;
int kt(){
	if(s.size()==1) return false;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]>s[i+1]){
			return false;
		}
	}
	return true;
}
void check(){
 	if(kt()){
		for(int i=0;i<s.size();i++){
			cout<<s[i]<<' ';
		}
		cout<<endl;
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j==1) s.push_back(a[i]);
		if(i==n) check();
		else Try(i+1);
		if(j==1) s.pop_back();
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	//sort(a+1,a+n+1,greater <int>());
	Try(1);
}
