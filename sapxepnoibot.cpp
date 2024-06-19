#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int x=1;
	for(int i=0;i<n;i++){
		int z=0;
		for(int j=0;j<=n-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				z=1;
			}
		}
		if(z){
			cout<<"Buoc "<<x<<": ";
			for(int k=0;k<n;k++){
				cout<<arr[k]<<' ';
			}x++;
			cout<<endl;
		}
	}
}

