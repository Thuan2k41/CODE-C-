#include <bits/stdc++.h>
//so sansh phan tu 1 mang a vs ptu 2 mang b
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+1],d=0,f[n+1];
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++){
		f[a[i]]=f[a[i]-1]+1;
		d=max(f[a[i]],d);
	}
	cout<<n-d<<endl;

}
