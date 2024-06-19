#include <bits/stdc++.h>
using namespace std;
struct NhanVien {
    string mnv,name,gt,date,dc,mst,ngay;
};
void nhap( NhanVien &a) {
	a.mnv ="00001";
	getline(cin,a.name);
	//cin.ignore();
	getline(cin,a.gt);
	//cin.ignore();
	cin>>a.date;
	if(a.date[1]=='/'){
		a.date="0"+a.date;
	}
	if(a.date[4]=='/'){
		a.date.insert(3,"0");
	}
	cin.ignore();
	getline(cin,a.dc);
	//cin.ignore();
    cin>>a.mst;
	cin>>a.ngay;	
    if(a.ngay[1]=='/'){
		a.ngay="0"+a.ngay;
	}
	if(a.ngay[4]=='/'){
		a.ngay.insert(3,"0");
	}
}
void in(NhanVien &a) {
	cout<<a.mnv<<' '<<a.name<<" "<<a.gt<<' '<<a.date<<' '<<a.dc<<' '<<a.mst<<' '<<a.ngay;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}


