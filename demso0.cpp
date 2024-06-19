#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,x;
		cin >> n>>x;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		auto  m = lower_bound(a, a + n, x) ;
		if(a[m-a]==x){
			cout<<m-a+1<<endl;
		}else cout<<"NO"<<endl;
	}
}
