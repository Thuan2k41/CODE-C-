#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv, ten, lop,email;
	public:
		SinhVien(){
			msv=ten=lop=email="";
		}
		friend istream &operator >>(istream &in,SinhVien &a){
			scanf("\n");
        getline(cin, a.msv);
        getline(cin, a.ten);
        getline(cin, a.lop);
        getline(cin, a.email);
        return in;
		}
		friend ostream &operator <<(ostream &out,SinhVien a){
			out<<a.msv<<' '<<a.ten<<' '<<a.lop<<' '<<a.email<<endl;
			return out;
		}
		string getMSv(){
			return msv;
		}
};
bool cmp(SinhVien a, SinhVien b) {
    return a.getMSv() < b.getMSv();
}

int main(){
	int n=0,i=0;
	SinhVien a[1000],x;
	while(cin>>x){
		a[n++]=x;
	}
	sort(a, a + n, cmp);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}

