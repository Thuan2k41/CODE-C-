#include <bits/stdc++.h>
using namespace std;

int d=0,c=0;
struct Phim {
	string ma,ten,ngay,tap,loai;
    int d,m,y;
};
struct TheLoai {
	string mtl,ttl;
};
TheLoai a[100];
void nhaptl(TheLoai &a) {
	getline(cin,a.ttl);
	c++;
	string cmp=to_string(c);
	cmp=string(3-cmp.size(),'0')+cmp;
	a.mtl="TL"+cmp;
}
void nhapphim(int n,Phim &b) {
	string s;
	getline(cin,s);
	for(int i=0; i<n; i++) {
		if(a[i].mtl==s) {
			b.loai=a[i].ttl;
			scanf("%.2d/%.2d/%.4d",&b.d,&b.m,&b.y);
			getline(cin,b.ten);
			getline(cin,b.tap);
			d++;
			string cmp=to_string(d);
			cmp=string(3-cmp.size(),'0')+cmp;
			b.ma="P"+cmp;
		}
	}
}
bool cmp(Phim a,Phim b){
	if(a.y<b.y ) return 1;
	if(a.y==b.y ){
		if(a.m<b.m){
			return 1;
		}
		if(a.m==b.m){
			if(a.d<b.d){
				return 1;
			}
		}
	}
	return 0;
}
int main() {
	int n,m;
	cin>>n>>m;
	cin.ignore();
	Phim b[m+1];
	for(int i=0; i<n; i++) {
		nhaptl(a[i]);
	}
	for(int i=0;i<m;i++){
		nhapphim(n,b[i]);
	}
	sort(b,b+m,cmp);
	for(int i=0;i<m;i++){
		cout<<b[i].ma<<" "<<b[i].loai<<' '<<b[i].ngay<<' '<<b[i].ten<<' '<<b[i].tap<<endl;
	}
}
