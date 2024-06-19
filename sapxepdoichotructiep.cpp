#include <bits/stdc++.h>
using namespace std;
void swap(int &x,int &y) {
	int tmp =x;
	x=y;
	y=tmp;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int a=0,z=1;;
	for(int i=0; i<n-1; i++) {
		//int x =arr[i];
		for(int j=i+1; j<n; j++) {
			if(arr[i]>arr[j]) {
				swap(arr[i],arr[j]);
				a=1;
			}
		}
		if(a) {
			cout<<"Buoc "<<z<<": ";
			for(int k=0; k<n; k++) {
				cout<<arr[k]<<' ';
			}
			cout<<endl;
			z++;
		}
	}
}
