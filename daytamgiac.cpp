#include <iostream>
using namespace std;
#include <math.h>
#include <algorithm>
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		int arr[n+1];
		for(int i=1; i<=n; i++) {
			cin>>arr[i];
		}
		while(x--){
			int a,b;
			cin>>a>>b;
			int sum=0;
			for(int i=a;i<=b;i++){
				sum+=arr[i];
			}
			cout<<sum<<endl;
		}
	}
}

