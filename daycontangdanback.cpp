#include <bits/stdc++.h>
using namespace std;
int n,m,ans=0;
vector <int> c,a, b;
void display() {
	vector<int> tmp = c;
    sort(tmp.begin(), tmp.end());
    if (tmp == c) ans++;
}
void Try(int i) {
	for (int j = b[i - 1] + 1; j <= n - m + i; ++j) {
        b[i] = j;
        c[i] = a[b[i]];
        if (i == m) display();
        else Try(i + 1);
    }
}
int main() {
		cin>>n>>m;
		a.resize(n + 1); // mang ban dau
    b.resize(m + 1, 0); // to hop index
    c.resize(m + 1, 0);
		for(int i=1;i<=n;i++){ 
			cin>>a[i];
		}
		//memset(a,1,sizeof(a));
		Try(1);
		cout<<ans<<endl;
	
}
