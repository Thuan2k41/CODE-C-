#include <bits/stdc++.h>
using namespace std;
int check(int n){
	if(n<2) return 0;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}
int main() {
	srand(time(NULL));
	int arr[100];
	cout<<"Danh sach so ngau nhien la:";
	for (int i = 0; i < 100; i++) {
		arr[i]= rand()%100;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sort(arr,arr+100);
	cout<<"So lon nhat la:"<<arr[99]<<endl;
	
	cout<<"TBC cua mang la:";
	int sum=0;
	for (int i = 0; i < 100; i++) {
		sum+=arr[i];
	}
	cout<<fixed<<setprecision(2)<<sum/100<<endl;
	int sum1=0,x=0;
	for (int i = 0; i < 100; i++) {
		if(arr[i]%2==0){
			sum1+=arr[i];
			x++;
		}
	}
	cout<<"Tong cac so chan:";
	cout<<fixed<<setprecision(2)<<sum1/x<<endl;
	cout<<"Cac snt la:";
	for (int i = 0; i < 100; i++) {
		if(check(arr[i])) cout<<arr[i]<<' ';
	}
	return 0;
}
