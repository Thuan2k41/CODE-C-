#include <bits/stdc++.h>
using namespace std;
void init(int arr[],int a){
	for(int i=1;i<=a;i++){
		arr[i]=6;
	}
}
void  check(int arr[],int a){
	int i=a;
	while(arr[i]==8){
		arr[i]=6;
		i--;
	}arr[i]=8;
	
}
int check2(int arr[],int a){
	if(arr[1]!=8 ||arr[a]!=6) return 0;
	for(int i=1;i<=a-1;i++){
		if(arr[i]==8 && arr[i+1]==8) return 0;
	}
	for(int i=2;i<=a-3;i++){
		if(arr[i]==6 && arr[i+1]==6 && arr[i+2]==6 &&arr[i+3]==6) return 0;
	}
	return 1;
}
void display(int arr[],int a){
	for(int i=1;i<=a;i++){
		cout<<arr[i];
	}
	cout<<endl;
}
int final(int arr[],int a){
	for(int i=1;i<=a;i++){
		if(arr[i]!=8) return 0;
	}
	return 1;
}
int main (){
	
		int a,b;
		cin>>a;
		int arr[a+1];
		init(arr,a);
		
		while(!final(arr,a)){
			check(arr,a);
			if(check2(arr,a)) display(arr,a);
		}
		cout<<endl;
	
}
