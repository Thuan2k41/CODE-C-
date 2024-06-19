#include <bits/stdc++.h>
using namespace std;
int n,x[100];
bool a[100];
void khoitao() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		a[i]=true;
	}
}
void hienthi() {
	for(int i=1; i<=n; i++) {
		cout<<x[i];
	}
	cout<<endl;
}
void Try(int i) {
	for(int j=1; j<=n; j++) {
		if(a[j]) { //khac if thi kt 
			x[i]=j;
			a[j]=false;
			if(i==n) hienthi();
			else {
				Try(i+1);
			}
			//backtrack   
			
		//try 3 ket thuc goi lai try 2 ma  try 2 kt tra 2=0 
			a[j]=true;
		}
	}
}
int main() {
	khoitao();
	Try(1);

}

