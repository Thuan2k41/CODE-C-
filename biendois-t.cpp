#include <bits/stdc++.h>
using namespace std;
int check(int s,int t){
	queue <pair<int,int>> q;
		set <int> se;
		q.push({s,0});
		int i=0;
		se.insert(s);
		while(!q.empty()){
			pair<int,int> p = q.front();
			q.pop();
			if(p.first==t) return p.second;
			else{
				if(se.find(p.first*2) == se.end() && p.first< t){
					se.insert(p.first*2);
					q.push({p.first*2,p.second+1});
				}
				if(se.find(p.first-1) == se.end() && p.first> 1){
			    	se.insert(p.first-1);
					q.push({p.first-1,p.second+1});
				}
			}
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int s,t;
		cin>>s>>t;
		cout<<check(s,t)<<endl;
	}
}

