#include <bits/stdc++.h>
using namespace std;
struct NhanVien {
    string mvn,name,gt,date,dc,mst,ngay;
};
void nhap( NhanVien &a) {
	cin.ignore();
	getline(cin,a.name);
	cin>>a.gt>>a.date;
	cin.ignore();
	getline(cin,a.dc);
	cin>>a.mst>>a.ngay;
}
void inds(NhanVien a[], int N) {
	for(int i=0;i<N;i++){
		a[i].mvn = to_string(i+1);
		while(a[i].mvn.size()<5) a[i].mvn="0"+a[i].mvn;
		cout<<a[i].mvn<<' '<<a[i].name<<" "<<a[i].gt<<' '<<a[i].date<<' '<<a[i].dc<<' '<<a[i].mst<<' '<<a[i].ngay<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

