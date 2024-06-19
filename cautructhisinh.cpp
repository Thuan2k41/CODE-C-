#include <bits/stdc++.h>
using namespace std;
struct ThiSinh {
	string name;
	string date;
	float d1;
	float d2;
	float d3;
	float x;
};
void nhap(ThiSinh &A) {
	getline(cin,A.name);
	//cin.ignore();
	cin>>A.date;
	cin.ignore();
	cin>>A.d1>>A.d2>>A.d3;
	A.x=A.d1+A.d2+A.d3;
}
void in(ThiSinh &A) {
	cout<<A.name<<' '<<A.date<<fixed<<setprecision(1)<<' '<<A.x;
}
int main() {
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}

