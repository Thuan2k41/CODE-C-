#include <bits/stdc++.h>
using namespace std;
struct Time{
	long long h,p,s,tong;
};
void Nhap(Time &a){
	cin>>a.h;
	cin>>a.p;
	cin>>a.s;
	a.tong = a.h*3600+a.p*60+a.s;
}
bool cmp(Time a,Time b){
	return a.tong < b.tong;
}
void in(Time a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i].h<<' '<<a[i].p<<' '<<a[i].s<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	struct Time a[n];
	for(int i=0;i<n;i++){
		Nhap(a[i]);
	}
	sort(a,a+n,cmp);
	in(a,n);
}

