#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[m], p1 = 0, p2 = 0, ans;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		while(k--){
			if(a[p1]<b[p2]){
				ans=a[p1++];
			}else{
				ans=b[p2++];
			}
		}
		cout<<ans<<endl;
	}
}
