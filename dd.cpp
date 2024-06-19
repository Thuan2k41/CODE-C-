#include <bits/stdc++.h>

using namespace std;
int main() {
	int t;
	cin>>t;
	string s;
	deque <int> st;
	while(t--) {
		cin>>s;
		if(s=="PUSHBACK") {
			int n;
			cin>>n;
			st.push_back(n);

		} else if(s=="PUSHFRONT") {
			int n;
			cin>>n;
			st.push_front(n);

		} else if(s== "PRINTFRONT") {
			if(st.empty()) {
				cout<<"NONE"<<endl;
			} else {
				cout << st.front() << endl;
			}
		}else if(s== "PRINTBACK") {
			if(st.empty()) {
				cout<<"NONE"<<endl;
			} else {
				cout << st.back() << endl;
			}
		} else if (s=="POPFRONT") {
			if (st.size())
				st.pop_front();
		} else if (s=="POPBACK") {
			if (st.size())
				st.pop_back();
		}
	}

}
