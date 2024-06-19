#include <bits/stdc++.h>
using namespace std;
fstream fs;
struct Tuoi{
	string ten,date;
	int d,m,y;
};
void nhap(Tuoi &a){
	cin.ignore();
	getline(fs,a.ten);
	getline(fs,a.date);
	a.d = stoi(a.date.substr(0,2));
	a.m = stoi(a.date.substr(3, 2));
    a.y = stoi(a.date.substr(6));
}

bool cmp(Tuoi a, Tuoi b)
{
    if (a.y > b.y) return 1;
    if (a.y == b.y) {
        if (a.m > b.m) return 1;
        if (a.m == b.m) {
            if (a.d > b.d) return 1;
        }
    }
    return 0;
}
int main(){
	struct Tuoi a[50];
	fs.open("DATA.in");
	int n;
	fs>>n;
	for(int i=0;i<n;i++){
		nhap(a[i]);
		if(i==n){
			break;
		}
	}
	sort(a,a+n,cmp);
	cout<<a[0].ten<<endl<<a[n-1].ten;
}

