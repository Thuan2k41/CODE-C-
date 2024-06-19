#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,m, k;
		cin >> n ;
		int a[n], b[n-1], p1 = 0, p2 = 0, ans;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n-1; i++)
			cin >> b[i];
		while(1){
			if(a[p1]==b[p2]){
				p1++,p2++;
			}else{
				cout<<p1+1<<endl;
				break;
			}
		}
	//	cout<<ans<<endl;
	}
}
