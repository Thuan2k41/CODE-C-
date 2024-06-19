#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
	int t;
	cin >>t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i =0; i<n; i++) {
			cin >> arr[i];
		}
		sort(arr,arr+n);
		//sap xep theo tang dan
		int res =1;
		for (int i =0; i<n; i++) {
			if(arr[i]>0) {
				if ( arr[i] <= res) {
					res = arr[i] +1;
				} else break;
			}
		}
		cout << res << endl;
	}
}
