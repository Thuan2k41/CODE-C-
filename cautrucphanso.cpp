#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct PhanSo{
	ll tu,mau;
};
void nhap(PhanSo &p){
	cin>>p.tu>>p.mau;
}
void rutgon(PhanSo &p){
    ll t,m;
	if(p.tu<p.mau){
		t=p.tu, m=p.mau;
	}else{
		t=p.mau, m=p.tu;
	}
	while(t!=0){
		ll x=t;
		t=m%t;
		m=x;
	}
	p.tu=p.tu/m, p.mau=p.mau/m;
	
}
void in(PhanSo &p){
	cout<<p.tu<<"/"<<p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
