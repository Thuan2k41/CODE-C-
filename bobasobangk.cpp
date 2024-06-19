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
			for(int j=i+1;j<n;j++){
				ans = upper_bound(a+j+1,a+n,k-a[i]-a[j]) - lower_bound(a+j+1,a+n,k-a[i]-a[j]);
				if(ans) break;
			}
			if(ans) break;
		}
		if(ans) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
