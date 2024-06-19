#include <bits/stdc++.h>
using namespace std;
int check(char c, int a,int b){
	if(c=='+') return a+b;
	else if( c=='-') return a-b;
	else if(c=='*') return a*b;
	else return a/b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin,s);
		queue <int> q;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]== ' ' ) continue;
			if(isdigit(s[i])){
				string tmp="";
				while(isdigit(s[i])){
					tmp=s[i]+tmp;
					i--;
				}
				q.push(stoi(tmp));
			}else{
				int a= q.front(); q.pop();
				int b= q.front(); q.pop();
				int z = check(s[i],b,a);
				q.push(z);
			}
		}
		cout<<q.front()<<endl;
	}
}

