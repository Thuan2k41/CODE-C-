#include <bits/stdc++.h>
using namespace std;
set <string> se;
int n,k;
int arr[100];
string a[100];
void diplay(){
	for(int i=1;i<=k;i++){
		cout<<a[arr[i]]<<' ';
	}cout<<endl;
}
void Try(int i){
	for(int j=arr[i-1]+1;j<=n-k+i;j++){
		arr[i]=j;
		if(i==k) diplay();
		else Try(i+1);
	}
}
int main(){
	arr[0]=0;
	cin>>n>>k;
	while(n--){
		string s;
		cin>>s;
		se.insert(s);
	}
	int i=0;
	for(auto it:se){
		i++;
		a[i]=it;
		//cout<<a[i]<<' ';
	}
	n=se.size();
	Try(1);
}
