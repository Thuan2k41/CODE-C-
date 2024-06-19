#include <bits/stdc++.h>
using namespace std;
int cnt=0;
class NhanVien {
	private:
		string mnv,ten,gt,ns,dc,mst,nk;
		int d,m,y;
	public:
		NhanVien() {
			mnv=ten=gt=ns=dc=mst=nk="";
			d=m=y=0;
		}
		friend istream &operator>> (istream &in,NhanVien &a) {
			cnt++;
			scanf("\n");
			string tmp=to_string(cnt);
			tmp=string(5-tmp.size(),'0')+tmp;
			a.mnv =tmp;
			getline(in,a.ten);
			getline(cin, a.gt);
			scanf("%d/%d/%d\n", &a.m, &a.d, &a.y);

			getline(in,a.dc);

			getline(cin, a.mst);
			getline(cin, a.nk);
			return in;
		}
		friend ostream &operator <<(ostream &os, NhanVien a) {
			cout<<a.mnv<<' '<<a.ten<<' '<<a.gt<<" ";
			printf("%.2d/%.2d/%.4d", a.m, a.d, a.y);
			cout<<' '<<a.dc<<" "<<a.mst<< ' '<<a.nk<<endl;
			return os;
		}
		int getm() {
			return m;
		}
		int getd() {
			return d;
		}
		int gety() {
			return y;
		}
};
bool cmp(NhanVien a,NhanVien b) {
	if(a.gety()<b.gety()) return 1;
	if(a.gety()==b.gety()) {
		if(a.getm()<b.getm()) return 1;
		if(a.getm()==b.getm()) {
			if(a.getd()<b.getd()) return 1;
		}
	}
	return 0;
}
void sapxep(NhanVien ds[],int N) {
	sort(ds,ds+N,cmp);
}
int main() {
	NhanVien ds[50];
	int N,i;
	cin >> N;
	for(i=0; i<N; i++) cin >> ds[i];
	sapxep(ds, N);
	for(i=0; i<N; i++) cout << ds[i];
	return 0;
}
