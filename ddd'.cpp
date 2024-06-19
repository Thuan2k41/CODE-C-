#include <bits/stdc++.h>
using namespace std;
int d=0;
class GiangVien{
	public:
		string ten,mon,mgv,mon1,ten1;
	friend  istream &operator >> (istream &in,GiangVien &a){
		getline(cin,a.ten);
		getline(cin,a.mon);
		d++;
		string cmp= to_string (d);
		a.mgv="GV"+string (2-cmp.size(),'0')+cmp;
		
		stringstream ss(a.mon);
		string word;
		while(ss>>word){
			a.mon1+=toupper(word[0]);
		}
		
		stringstream ss1(a.ten);
		string word1;
		while(ss1>>word1){
			word1[0]=tolower(word1[0]);
			a.ten1+=word1+ " ";
		}
		return in;
	}
	friend ostream &operator << (ostream &out,GiangVien a){
		cout<<a.mgv<<" "<<a.ten<<' '<<a.mon1<<endl;
		return out;
	}
};
/*bool cmp(GiangVien a,GiangVien b){
	if(a.ten1==b.ten1) return a.mgv<b.mgv;
	else return a.ten1<b.ten1;
}*/
bool canFind(string a, string b) {
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    return (b.find(a) != -1);
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	GiangVien a[t+1];
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	int n; 
	cin>>n;
	cin.ignore();
	while(n--){
		string s,m;
		cin>>s;
		for(int i=0;i<s.size();i++){
			m+=tolower(s[i]);
		}
		//cout<<m<<endl;
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
		for(int i=0;i<t;i++){
			if (a[i].ten1.find(m)!=1)
                cout << a[i];
		}
	}
}
