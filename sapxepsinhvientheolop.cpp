#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,ten,lop,email;
		
	public:
		SinhVien(){
			msv=lop=ten=email="";
			
		}
	    friend  ostream &operator<< (ostream &out, SinhVien a){
	    	out<<a.msv<<' '<<a.ten<<' '<<a.lop<<' '<<a.email<<endl;
	    	return out;
		}
		friend istream &operator >>(istream &in,SinhVien &a){
			in.ignore();
			getline(in,a.msv);
			getline(in,a.ten);
			in>>a.lop>>a.email;
			return in;
		}
		string getLop(){
			return lop;
		}
		string getmsv(){
			return msv;
		}
};
bool cmp(SinhVien a, SinhVien b) {
    if (a.getLop() == b.getLop()) return a.getmsv() < b.getmsv();
    return a.getLop()< b.getLop();
}
void sapxep(SinhVien a[],int N) {
	sort(a,a+N,cmp);
}
int main(){
	int N;
	SinhVien a[1000];
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	sapxep(a,N);
	for(int i=0;i<N;i++){
		cout<<a[i];
	}
}

