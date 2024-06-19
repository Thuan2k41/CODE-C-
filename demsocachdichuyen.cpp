#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[20][20], Max;
long long sum, ans;
void Try(int i, int j,long longsum) {
	sum += a[i][j];
	if (i == n || j == n) {
        if (sum == k) ans++;
        
        return;
    }
    else if (sum > k) return;
	else{
		if(i < n ) Try(i + 1, j,sum);
        if(j < n ) Try(i, j + 1,sum);
	}
	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		Max = -1;
		ans = 0;
		cin >> n >> k;
		for(int i =1; i <= n; ++i) {
			for(int j = 1; j <= n; ++j) {
				cin >> a[i][j];
			}
		}
		Try(0, 0,a[1][1]);
		cout << ans << endl;
	}
	return 0;
}
