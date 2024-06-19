#include <bits/stdc++.h>
using namespace std;
struct MatHang{
	int mmh;
	string tmh,nh;
	float gm,gb,ln; 
};
void nhap(MatHang a[],int n){
	for(int i=0;i<n;i++){
		a[i].mmh=i+1;
		getline(cin,a[i].tmh);
		getline(cin,a[i].nh);
		cin>>a[i].gm;
		cin>>a[i].gb;
		a[i].ln= a[i].gb-a[i].gm ;
		cin.ignore();
	}
}
bool cmp(MatHang a, MatHang b){
	return a.ln>b.ln;
}
void in(MatHang a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i].mmh<<" "<<a[i].tmh<<' '<<a[i].nh<<' '<<fixed<<setprecision(2)<<a[i].ln<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	struct MatHang a[n];
	cin.ignore();
	nhap(a,n);
	sort(a,a+n,cmp);
	in(a,n);
}

