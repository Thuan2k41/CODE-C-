#include <bits/stdc++.h>
using namespace std;
void init(string arr[],int a) {
	for(int i=1; i<=a; i++) {
		arr[i]='A';
	}
}
void  check(string arr[], int a) {
	int i=a;
	while(arr[i]=="B"){
		arr[i]='A';
		i--;
	}
	arr[i]='B';
}
void display(string arr[],int a) {
	for(int i=1; i<=a; i++) {
		cout<<arr[i];
	}
	cout<<' ';
}
int final(string arr[],int a) {
	for(int i=1; i<=a; i++) {
		if(arr[i]!="B") return 0;
	}
	return 1;
}
int main () {
	int n; cin>>n;
	while(n--){
	
		int a,b;
		cin>>a;
		string arr[a+1];
		init(arr,a);
		display(arr,a);
		while(!final(arr,a)) {
			check(arr,a);
			
				display(arr,a);
			
		}
		cout<<endl;
	}
}
