#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		long long b, p;
		cin >> b >> p;
		long long res = 0;
		for (long long i = 1; i < p; ++i) {
			if ((i * i) % p == 1) {
				long long last = i + p * (b / p);
				if (last > b)
					last -= p;
				res += (last - i) / p + 1;
			}
		}
		cout << res << endl;
	}
	return 0;
}
