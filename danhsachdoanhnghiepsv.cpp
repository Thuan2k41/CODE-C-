#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep {
public:
    string ma, ten;
    int sluong;

    friend istream &operator >> (istream &is, DoanhNghiep &a) {
        scanf("\n");
        getline(cin, a.ma);
        getline(cin, a.ten);
        cin >> a.sluong;
        return is;
    }

    friend ostream &operator << (ostream &os, DoanhNghiep a) {
        cout << a.ma << " " << a.ten << " " << a.sluong << "\n";
        return os;
    }
};

bool cmp(DoanhNghiep a, DoanhNghiep b) {
    if (a.sluong == b.sluong) return a.ma < b.ma;
    return a.sluong > b.sluong;
}

int main() {
    int n;
    cin >> n;
    DoanhNghiep a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    int q;
    cin>>q;
    while(q--){
    	int x,y;
    	cin>>x>>y;
    	if(x>y){
    		int z=x;
    		x=y; y=z;
		}
		cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<x<<" DEN "<<y<<" SINH VIEN:"<<endl;
    	for(int i=0;i<n;i++){
    		if(a[i].sluong>=x&&a[i].sluong<=y){
    			cout<<a[i];
			}
		}
	}
    return 0;
}
