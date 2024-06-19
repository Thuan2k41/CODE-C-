#include <bits/stdc++.h>
using namespace std;
int calculate(int x, int y, char o) {
    switch (o) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '–':
    	return x-y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    }
}
int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s;
		cin>>s;
		int x=0;
		stack <int> st;
		for(int i=s.size()-1; i>=0; i--) {
			
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i]=='–'){
				int a=(st.top()); st.pop();
				int b=(st.top()); st.pop();
				int z = calculate(a,b,s[i]);
				st.push(z);
			}else
				st.push(s[i] - '0');
		}
		cout<<st.top()<<endl;
	}
}


