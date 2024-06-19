#include <bits/stdc++.h>
using namespace std;
fstream outfile("PTIT.out",ios::out| ios::binary);
struct NhanVien{
	string ms,name;
	float hs,lcb,pc,tong;
};
void nhap(NhanVien &a){
	cin>>a.ms;
	cin.ignore();
	getline(cin,a.name);
	cin>>a.hs>>a.lcb>>a.pc;
}
void Nhapfile(NhanVien &a){
	outfile.write(reinterpret_cast<string*>(&a.ms),sizeof(a.ms));
	outfile.write(reinterpret_cast<string*>(&a.name),sizeof(a.name));
	outfile.write(reinterpret_cast<float*>(&a.hs),sizeof(a.hs));
	outfile.write(reinterpret_cast<float*>(&a.lcb),sizeof(a.lcb));
	outfile.write(reinterpret_cast<float*>(&a.pc),sizeof(a.pc));
}
void doc(NhanVien &a){
	a.tong=a.hs*a.lcb+a.pc;
}
void inra(NhanVien &a){
	cout<<a.ms<<" "<<a.name<<' '<<a.tong<<endl; 
}
int main(){
	struct NhanVien a[10];
	out.open("PTIT.out");
	for(int i=0;i<2;i++){
		nhap(a[i]);
		Nhapfile(a[i]);
	}
	in.open("PTIT.out");
	for(int i=0;i<2;i++){
		doc(a[i]);
		inra(a[i]);
	}
	out.close();
} 
