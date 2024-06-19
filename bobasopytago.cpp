#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {

	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		long long a[n], s = 1e9,ans=0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for (int i = 0; i < n-1; i++){
			for(int j=i+1;j<n;j++){
				long long x=a[i]*a[i]+a[j]*a[j];
				long long z=sqrt(x);
				if(binary_search(a+j+1,a+n,z) && z*z==x) {
					ans=1;
					cout<<"YES"<<endl;
					break;
				}
			}if(ans) break;
		}
		if(!ans) cout<<"NO"<<endl;
	}
}
