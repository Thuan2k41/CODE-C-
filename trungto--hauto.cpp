#include <bits/stdc++.h>
using namespace std;

int ut(char c){
	if(c=='^') return 3;
	else if(c=='*'|| c=='/' ) return 2;
	else if(c=='+'|| c=='-' ) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack <char> st;
		string ans="";
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				st.push(s[i]);
			}else{
				if(isalpha(s[i])){
					ans+=s[i];
				}else if(s[i]==')'){
					while(!st.empty() && st.top()!='('){
						ans+=st.top();st.pop();
					}	
					st.pop();
				}else{
					while(!st.empty() &&ut(s[i])<=ut(st.top())){
						ans+=st.top();st.pop();
					}
					st.push(s[i]);
				}
			}
		}
		while(!st.empty()){ // truong hop khong co ngoac 
			ans+=st.top(); st.pop();
		}
		cout<<ans<<endl;
	}
}

