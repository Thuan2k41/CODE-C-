#include <bits/stdc++.h>
using namespace std;
void init(int arr[],int a) {
	for(int i=1; i<=a; i++) {
		arr[i]=0;
	}
}
void  check(int arr[], int a) {
	int i=a;
	while(arr[i]==1){
		arr[i]=0;
		i--;
	}
	arr[i]=1;
}
int check2(int arr[],int a,int b){
	int d=0;
	for(int i=1;i<=a;i++){
		if(arr[i]==1){
			d++;
			
		}
	}
	if(d==b) return 1;
	else return 0;
}
void display(int arr[],int a) {
	for(int i=1; i<=a; i++) {
		cout<<arr[i];
	}
	cout<<endl;
}
int final(int arr[],int a) {
	for(int i=1; i<=a; i++) {
		if(arr[i]!=1) return 0;
	}
	return 1;
}
int main () {
	int n; cin>>n;
	while(n--){
		
	
		int a,b;
		cin>>a>>b;
		int arr[a+1];
		init(arr,a);
		if(check2(arr,a,b)){
				display(arr,a);
			}
		while(!final(arr,a)) {
			check(arr,a);
			if(check2(arr,a,b)){
				display(arr,a);
			}
		}
		cout<<endl;
	}
}
