#include <bits/stdc++.h>
using namespace std;
int d=0;
class GiangVien {
	public:
		string ten,mon,mgv,name,mon1;
		friend istream &operator >>(istream &in,GiangVien &a) {
			getline(cin,a.ten);
			getline(cin,a.mon);
			string word1;
			stringstream ss(a.mon);
			while(ss>>word1) {
				a.mon1+=toupper(word1[0]);
			}

			d++;
			string tmp=to_string(d);
			tmp=string(2-tmp.size(),'0')+tmp;
			a.mgv="GV"+tmp;

			return in;
		}
		friend ostream &operator <<(ostream &out,GiangVien a) {
			cout<<a.mgv<<' '<<a.ten<<' '<<a.mon1<<endl;
			return out;
		}
};

int main() {
	int t;
	cin>>t;
	GiangVien a[t+1];
	cin.ignore();
	for(int i=0; i<t; i++) {
		cin>>a[i];
	}
	int x;
	cin>>x;
	cin.ignore();
	while(x--) {
	
		string s;
		getline(cin,s);
		string word3,z;
		stringstream ss3(s);
		while(ss3>>word3) {
			z+=toupper(word3[0]);
		}
		cout<<"DANH SACH GIANG VIEN BO MON "<<z<<":\n";
		for(int i=0; i<t; i++) {
			if(s==a[i].mon) {
				cout<<a[i];
			}
		}
	}

}

