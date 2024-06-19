#include <bits/stdc++.h>
using namespace std;
class NhanVien {
	private:
		 string ms,ten;
		 float hs,lcb,pc,tl;
		 static float tong;
	public:
		
		void nhap() {
			cin.ignore();
			getline(cin,ms);
			getline(cin,ten);
			cin>>hs>>lcb>>pc;
			tl=lcb*hs+pc;
			tong+=tl;
		}
		
};
int main() {
	NhanVien a[10];
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++) {
		a[i].nhap();
	}
	cout<<NhanVien::tong;
}
