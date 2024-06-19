#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	//cin.ignore();
	while(t--) {
		int n;
		cin>>n;
		int arr[n],brr[n];
		for(int &x :arr) cin>>x;
		stack<int > st;
		int d=0;
		for(int i=0; i<n; i++) {
			if(st.empty()) {
				st.push(arr[i]);
			} else {
				while(!st.empty() && st.top() < arr[i]) {
					cout<<arr[i]<<" ";
					d++;
					st.pop();
				}
				st.push(arr[i]);
			}
		}
		for(int i=d;i<n;i++){
			cout<<-1<<' ';
		}
		cout<<endl;
	}

}
