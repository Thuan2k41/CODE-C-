#include <bits/stdc++.h>
using namespace std;
int d=0;
string chuan(string s) {
	string word;
	string s1;
	stringstream ss(s);
	while(ss>>word) {
		for(int i=0; i<word.size(); i++) {
			word[i]=tolower(word[i]);
		}
		word[0]=toupper(word[0]);
		s1+=word+ " ";
	}
	s1.erase(s1.size()-1); 
	return s1;
}

class SinhVien {
	private:
		string ten,lop,ns,msv;
		float gpa;
	public:
		SinhVien() {
			ten=lop=ns=msv="";
			gpa=0;
		}
		float getGpa(){
			return gpa;
		}
		friend istream &operator >> (istream &in, SinhVien &a) {
			d++;
			string tmp=to_string(d);
			tmp=string(3-tmp.size(),'0')+tmp;
			a.msv="B20DCCN"+tmp;
			scanf("\n");
			getline(in,a.ten);
			a.ten=chuan(a.ten);
			in>>a.lop>>a.ns>>a.gpa;
			if(a.ns[2]!='/') a.ns="0"+a.ns;
			if(a.ns[5]!='/')  a.ns.insert(3,"0");
			return in;
		}
		friend ostream &operator << (ostream &os, SinhVien a) {
			os << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " ";
			os << fixed << setprecision(2) << a.gpa << "\n";
			return os;
		}
};
bool cmp(SinhVien a,SinhVien b){
	return a.getGpa()>b.getGpa();
}
void sapxep(SinhVien ds[],int N){
	sort(ds,ds+N,cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

