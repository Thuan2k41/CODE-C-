#include <bits/stdc++.h>
// 1 2 3 4 5 6 7 .   1 2 5 4 3 6 7
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int a=0,b=0;
		k = min(k, n-k);
		for(int i=0;i<n;i++){
			if(i<k){
				a+=arr[i];
			}else{
				b+=arr[i];
			}
		}
		cout<<abs(b-a)<<endl;
	}
}
