#include <bits/stdc++.h>
using namespace std;
int a,b, arr[100][100],ans;
void Try(int i,int j){
	if(i==a&& j==b){
		ans++;
	}if(i<a ){
		Try(i+1,j);
	}
	if(j<b){
		Try(i,j+1);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>a>>b;
		ans=0;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				cin>>arr[i][j];
			}
		}
		Try(1,1);
		cout<<ans<<endl;
	}
}
