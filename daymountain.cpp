#include <bits/stdc++.h>
using namespace std;
int check(int arr[],int x,int y) {
	int z=0;
	while(x<y) {

		if(z==0) {
			if(arr[x]<arr[x+1]) {
				x++;

			} else {
				z=1;
			}
		} else {
			if(arr[x]<arr[x+1]) {
				return 0;
			}else{
				x++;
			}
		}
	}
	return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n];
		for(int i=1; i<=n; i++) {
			cin>>arr[i];
		}
		int x,y;
		cin>>x>>y;
		if(check(arr,x,y)==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}

