#include <bits/stdc++.h>
using namespace std;
float check(int n,float arr[]){
	float max;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	cout<<"so luong ptu cua mang la:"; 
	int n; cin>>n;
	float arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<check(n,arr);
}

