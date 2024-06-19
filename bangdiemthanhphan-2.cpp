#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,ten,lop;
	float d1,d2,d3,tb;
};
void nhap(SinhVien &a){
	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.ten);
	getline(cin,a.lop);
	cin>>a.d1>>a.d2>>a.d3;
	a.tb=a.d1+a.d2+a.d3;
}
void in(SinhVien a,int i){
	cout<<i<<" "<<a.msv<<' '<<a.ten<<' '<<a.lop<<' '<<fixed<<setprecision(1)<<a.d1<<' '<<fixed<<setprecision(1)<<a.d2<<' '<<fixed<<setprecision(1)<<a.d3<<endl;
}
bool cmp(SinhVien a,SinhVien b){
	return a.ten<b.ten;
}
int main(){
	SinhVien a[100];
	int n; cin>>n;
	for(int i=0;i<n;i++){
		nhap(a[i]);
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		in(a[i],i+1);
	}
}

