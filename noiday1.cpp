#include <bits/stdc++.h>
using namespace std;
/*2 3 4 6
4 5 6=5
6 9 =5+9
15=5+9+15*/
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n+1];
		priority_queue<int, vector<int>, greater<int>> q;
		for(int i=0; i<n; i++) {
			int x; cin>>x;
			q.push(x);
		}
		long long s=0;;
		while (q.size()>1){
			int s1 = q.top();
            q.pop();
            int s2 = q.top();
            q.pop();
            int k = s1 + s2;
            s += k;
            q.push(k);
		}cout<<s<<endl;
	}
}
