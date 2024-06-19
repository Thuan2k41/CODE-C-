#include <iostream>
using namespace std;
#include <math.h>
#include <algorithm>
int min(int n, int arr[]){
	int res=abs(arr[0]-arr[0]);
	for(int i=0;i<n;i++){
		if(abs(arr[i]-arr[i+1])<res){
			res=abs(arr[i]-arr[i+1]);
		}
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[100000];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort (arr,arr+n); 
		cout<<min(n,arr)<<endl;
		
	} 
}

