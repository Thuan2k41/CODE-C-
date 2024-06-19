#include<bits/stdc++.h>
using namespace std;
struct NhanVien {
	string t,gt,ns,dc,id,n;
	string mnv;
};
void chn(string &s) {
	if(s[1]=='/') s.insert(0,"0");
	if(s[4]=='/') s.insert(3,"0");
}
bool cmp(NhanVien a,NhanVien b) {
	string d1,d2,m1,m2,y1,y2;
	stringstream ss(a.ns);
	getline(ss,d1,'/');
	getline(ss,m1,'/');
	getline(ss,y1);
	stringstream zz(b.ns);
	getline(zz,d2,'/');
	getline(zz,m2,'/');
	getline(zz,y2);
	int a1=stoll(d1),a2=stoll(m1),a3=stoll(y1),b1=stoll(d2),b2=stoll(m2),b3=stoll(y2);
	if(a3!=b3) return a3<b3;
	if(a1!=b1) return a1<b1;
	if(a2!=b2) return a2<b2;
}
int j=1;
void nhap(NhanVien &ds) {
	scanf("\n");
	getline(cin,ds.t);
	cin>>ds.gt>>ds.ns;
	scanf("\n");
	getline(cin,ds.dc);
	cin>>ds.id>>ds.n;
	chn(ds.ns);
	chn(ds.n);
	ds.mnv=to_string(j);
	ds.mnv.insert(0,5-ds.mnv.size(),'0');
	j++;
}
void sapxep(NhanVien ds[],int N) {
	sort(ds,ds+N,cmp);
}
void inds(NhanVien ds[],int N) {
	for(int i = 0; i < N; i++) {
		cout<<ds[i].mnv<<" "<<ds[i].t<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].id<<" "<<ds[i].n<<"\n";
	}
}
int main() {
	struct NhanVien ds[50];
	int N,i;
	cin >> N;
	for(i = 0; i < N; i++) nhap(ds[i]);
	sapxep(ds, N);
	inds(ds, N);
	return 0;
}
