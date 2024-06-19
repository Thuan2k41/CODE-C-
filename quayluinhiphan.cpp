#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	vector <string> res;
	cin>>n;
	queue<string> q;
	q.push("");
	while(true){
		string top=q.front();
		q.pop();
		if(top.size()*2>n){
			break;
		}else{
			if(top!=""){
				string tmp=top;
				reverse(tmp.begin(),tmp.end());
				res.push_back(top+tmp);
			}
		}
		q.push(top+"0");
		q.push(top+"1");
	}
	for(auto x:res){
		cout<<x<<' ';
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
		cout<<endl;
	}
}

