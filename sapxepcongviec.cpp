#include <bits/stdc++.h>
//so sansh phan tu 1 mang a vs ptu 2 mang b
using namespace std;

int main()
{
	
	{
		int n;
		cin >> n;
		pair<int, int> a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i].second; 
			cin>>a[i].first;
		}
		sort(a+1,a+n+1);
		
		int d=a[n].second-1;
		int x=a[n].first;
		
		int i=1;
		while(d--){
			x+=a[n-i].first;
			i++;
		}
		cout<<x<<endl;
	}
}
