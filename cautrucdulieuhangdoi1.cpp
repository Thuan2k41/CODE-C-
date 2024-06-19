#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		queue <int> q;
		for(int i=1;i<=n;i++){
			int x; cin>>x;
			if(x==1){
				cout<<q.size()<<endl;
			}else if(x==2){
				if(q.empty()) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}else if(x==3){
				int a; cin>>a;
				q.push(a);
			}else if(x==4){
				if(!q.empty()){
					q.pop();	
				}else continue;
			}else if(x==5){
				if(!q.empty()){
					cout<<q.front()<<endl;
				}else cout<<-1<<endl;
			}else{
				if(!q.empty()){
					cout<<q.back()<<endl;
				}else cout<<-1<<endl;
			}
		}
	}
}

