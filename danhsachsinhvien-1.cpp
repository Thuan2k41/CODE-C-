#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string stt, ten,lop,ns;
	float gpa;
};
string ChuanHoa(string s){
	stringstream ss(s);
	string word;
	string tmp;
	while(ss>>word){
		for(int i=0;i<word.size();i++){
			word[i]=tolower(word[i]);
		}
		word[0]=toupper(word[0]);
		tmp+=word+" ";
	}
	tmp.erase(tmp.size());
	return tmp;
}
void nhap(SinhVien ds[],int N){
	cin.ignore();
	for(int i=0;i<N;i++){
		ds[i].stt=to_string(i+1);
		while(ds[i].stt.size()<3){
			ds[i].stt="0"+ds[i].stt;
		}
		ds[i].stt="SV"+ds[i].stt;
		getline(cin,ds[i].ten);
		ds[i].ten=ChuanHoa(ds[i].ten);
		cin>>ds[i].lop;
		cin>>ds[i].ns;
		if(ds[i].ns[1]=='/') ds[i].ns="0"+ds[i].ns;
		if(ds[i].ns[4]=='/')   ds[i].ns.insert(3,"0");
		cin>>ds[i].gpa;
		cin.ignore();
	}
} 
void in(SinhVien ds[], int N) {
	for(int i=0;i<N;i++){
		
		cout<<ds[i].stt<<' '<<ds[i].ten<<ds[i].lop<<' '<<ds[i].ns<<' '<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
	}
}
bool cmp(SinhVien a,SinhVien b){
	if(a.gpa== b.gpa ) return a.stt<b.stt;
	return a.gpa>b.gpa;
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
