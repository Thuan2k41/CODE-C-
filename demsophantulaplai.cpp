#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n];
		int brr[1000000]={0};
		for(int i=0; i<n; i++) {
			cin>>arr[i];
			brr[arr[i]]++;

		}
		sort(arr,arr+n);
		int sum=0;
		for(int i=0; i<n; i++) {
			if(brr[arr[i]]>1) {
				//cout<<brr[arr[i]]<<endl;
				sum+=brr[arr[i]];
				brr[arr[i]]=0;

			}
		}
     	cout<<sum<<endl;
	}
}

