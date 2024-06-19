#include<bits/stdc++.h>
using namespace std;
struct matPhang {
	int x,y,z;
};
int main() {
	int t;
	cin>>t;
	while(t--) {
		matPhang a[4];
		for(int i=0; i<4; i++) {
			cin>>a[i].x>>a[i].y>>a[i].z;
		}
		int x1,y1,z1;
		int x2,y2,z2;
		x1=a[1].x-a[0].x;
		y1=a[1].y-a[0].y;
		z1=a[1].z-a[0].z;
		x2=a[2].x-a[0].x;
		y2=a[2].y-a[0].y;
		z2=a[2].z-a[0].z;
		int a1,b1,c1,d;
		a1=y1*z2-y2*z1;
		b1=-(x1*z2-x2*z1),c1=(x1*y2-x2*y1);
		d=-(a1*a[0].x+b1*a[0].y+c1*a[0].z);
		if(a[3].x*a1+a[3].y*b1+a[3].z*c1+d==0) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
