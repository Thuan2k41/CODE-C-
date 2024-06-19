#include <bits/stdc++.h>
using namespace std;
fstream fs,fs2;
struct Ten{
	string date,ten,sdt;
};
void nhap(Ten &a){
	getline(fs,a.date);
	getline(fs,a.ten);
	getline(fs,a.sdt);
}
bool cmp(Ten a,Ten b){
	return a.ten< b.ten;
}
int main(){
	int n;
	cin>>n;
	string c[100][100];
	for(int i=0;i<n+1;i++){
		string s;
		getline(cin,s);
		c[x][s];
		if(s=="\n"){
			x++;
		}
	}
	for(int i=0;i<x;i++){
		
	}
}
