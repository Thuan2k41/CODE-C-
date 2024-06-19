#include<bits/stdc++.h>
using namespace std;
void check (string a,int d[]){
	for(int i=0;i<a.size();i++){
		if(a[i]=='2')  d[2]++;
		else if(a[i]=='3')  d[3]++;
		else if(a[i]=='4')  d[3]++,d[2]+=2;
		else if(a[i]=='5')  d[5]++;
		else if(a[i]=='6' ) d[5]++,d[3]++;
		else if(a[i]=='7' )  d[7]++;
		else if(a[i]=='8' ) d[7]++,d[2]+=3;
		else if(a[i]=='9') d[7]++,d[3]+=2, d[2]++;
	} 
	for(int i=9;i>=2;i--){
		for(int j=1;j<=d[i];j++){
			cout<<i;
		}
	}
	cout<<endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		string a;
		cin >> n >> a;
		int d[10]={0};
		check(a,d);
	}
	return 0;
}
