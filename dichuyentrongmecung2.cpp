#include <bits/stdc++.h>
using namespace std;
int n, a[10][10];
int c;
vector <string> str;
string s;
void Try(int i,int j,string s){
	if(i==n && j==n &&a[i][j]==1 ){
		c=true;
		str.push_back(s);
		return;
	}
	if(a[n][n]==0|| a[1][1]==0){
		c=false;
		return ;
	}if(a[i-1][j]==1 && i<n i>1){
		Try(i-1,j,s+"U");
	}
	if(a[i+1][j]==1 && i<n){
		Try(i+1,j,s+"D");
	}
	if(a[i][j+1]==1&&j<n){
		Try(i,j+1,s+"R");
	}
	if(i<n &&j<n && !(a[i+1][j]&& a[i][j+1]) || i> n|| j>n) {
		return ;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		c=false;
		cin>>n;
		s="";
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		str.clear();
		Try(1,1,s);
		if(c==false) {
			cout<<-1;
		} else {
			sort(str.begin(),str.end());
			for(auto it: str) {
				cout<< it<<' ';
			}
		}
		cout<<endl;
	}
} 
