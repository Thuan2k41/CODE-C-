#include <bits/stdc++.h>
using namespace std;
int ut(char c){
	if(c=='^') return 3;
	else if (c=='*'|| c=='/') return 2;
	else if (c=='+'|| c=='-' )return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	getchar();
	while(t--){
		string s,ans="";
		getline(cin,s);
		stack <char> st;
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				st.push(s[i]);
			}else{
				if(isalpha(s[i])){
					ans+=s[i];
				}else if(s[i]==')'){
					while(st.top()!='(' && !st.empty()){
						ans+=st.top();
						st.pop();
						
					}st.pop();
				}else{
					while(!st.empty()&& ut(s[i])<=ut(st.top())){
						ans+=st.top(); st.pop();
						
					}st.push(s[i]);
				}
			}
		
		
		}
			while(!st.empty()){
				ans+=st.top();
				st.pop();
			}
			cout<<ans<<endl;
	}
}

