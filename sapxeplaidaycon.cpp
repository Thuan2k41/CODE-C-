#include <bits/stdc++.h>
int check(int a[],int i,int n) {
	for(int j=i; j<n-1; j++) {
		if(a[j]>a[j+1]) {
			return 0;
		}
	}
	return 1;
}
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n ;
		cin>>n;
		int a[n];
		multiset<int> s;
		for(int i=0; i<n; i++) {
			cin>>a[i];
			s.insert(a[i]);
		}
		vector <int> v;
		for(auto x :s) {
			v.push_back(x);
		}
		int i=0;
		for(auto it:s) {
			if(it==a[i]) {
				i++;
			} else {
				cout<<i+1<<' ';
				break;
			}
		}
		for(int i=n-1; i>=0; i--) {
			if(a[i] != v[i]) {
				cout<<i+1;
				break;
			}
		}
		cout<<endl;
	}
}

