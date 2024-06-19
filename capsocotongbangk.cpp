#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n, k, ans = 0;
		cin >> n >> k;
		long long a[n];
		for (long long &i : a) cin >> i;
		sort(a, a+n);
		for (int i = 0; i < n; ++i) {
			long long x= k-a[i];
			ans+= upper_bound(a+i+1,a+n,x) - lower_bound(a+i+1,a+n,x);
		}
		cout << ans<<endl;
	}
}
