#include <bits/stdc++.h>
using namespace std;
int n,k, a[101], p=0,arr[101][101];
vector <int> x(101);
queue<vector<int>> s;
void kt() {
	int d=0;
	for(int i=1;i<=n;i++){
		
		d+=arr[i][ x[i] ];
	}
	if(d==k){
		p++;
		s.push(x);
	}
}
void Try(int i) {
	for(int j=1; j<=n; j++) {
		if(a[j]) { //khac if thi kt 
			x[i]=j;
			a[j]=false;
			if(i==n) kt();
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

	cin>>n>>k;

	for(int i=1; i<=n; i++) {
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
		a[i]=1;
		x[i]=0;
	}
	
	Try(1);
	cout<<p<<endl;
	while(s.size()){
		x=s.front();
		s.pop();
		for(int i=1;i<=n;i++){
			cout<<x[i]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
}
