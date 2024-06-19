#include <bits/stdc++.h>
using namespace std;
//4 5 3 2 4 testcase//
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector <long long> arr(n),brr(n,-1);
		for(long long &x :arr) cin>>x;
		stack<long long > st;
		int d=0;
		for(int i=0; i<n; i++) {
			
				while(!st.empty() && arr[st.top() ]< arr[i]) {
					brr[st.top()]=i;
					st.pop();
				}
				st.push(i);
			
		}
		for(int i=0;i<n;i++){
			if(brr[i]==-1){
				cout<<-1<<' ';
			}else cout<<arr[brr[i]]<<' ';
		}
		cout<<endl;
	}

}

