#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
	string name,lop;
	float x;
	string msv,date;
	void nhap() {
		a.msv ="B20DCCN001";
		getline(cin,a.name);
		//cin.ignore();
		getline(cin,a.lop);
		//cin.ignore();
		cin>>a.date;
		if(a.date[1]=='/') {
			a.date="0"+a.date;
		}
		if(a.date[4]=='/') {
			a.date.insert(3,"0");
		}
		//cin.ignore();
		cin>>a.x;
	}
	void in() {
		cout<<a.msv<<' '<<a.name<<' '<<a.lop<<' '<<a.date<<' '<<fixed<<setprecision(2)<<a.x;
	}


};

int main() {
	struct SinhVien a;
	a.nhap();
	a.in();
	return 0;
}

