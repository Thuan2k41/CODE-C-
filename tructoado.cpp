#include <bits/stdc++.h>
//so sansh phan tu 1 mang a vs ptu 2 mang b
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		pair<int, int> a[n];
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x;
			a[i].second=x; 
			cin>>y;
			a[i].first=y;
		}
		
		sort(a,a+n);
		int d=1;
		int x=a[0].first;
		
		for(int i=1;i<n;i++){
			
			if(x <= a[i].second){
				//cout<<a[i].first<<' '<<a[i].second<<endl;
				d++;
				x=a[i].first;
			}
		} 
		cout<<d<<endl;
	}
}

