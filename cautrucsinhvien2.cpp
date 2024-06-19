#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv, name ,lop,date;
	float gpa;
};
void nhapThongTinSV(SinhVien &a){
	a.msv="N20DCCN001";
	getline(cin,a.name);
	cin>>a.lop;
	cin>>a.date;
	if(a.date[1]=='/'){
		a.date="0"+a.date;
	}
	if(a.date[4]=='/'){
		a.date.insert(3,"0");
	}
	cin>>a.gpa;
}
void inThongTinSV(SinhVien &a){
	cout<<a.msv<<" "<<a.name<<' '<<a.lop<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
