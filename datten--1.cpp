#include <bits/stdc++.h>
using namespace std;
// khai bao n chir 1 lan, th =0 sai 
int n,k,o=1;
int arr[100];
string a[100];
void display(){
	for(int i=1;i<=k;i++){
		cout<<a[arr[i]]<<' ';
	}cout<<endl;
}
void Try(int i){
	
	for(int j=arr[i-1]+1;j<=n-k+i;j++){
		arr[i]=j;
		//cout<<a[j];
		if(i==k) display();
		else Try(i+1);
	}
}
int main(){
	cin>>n>>k;
	set <string> s;
	for(int i=1;i<=n;i++){
		string x; cin>>x;
		s.insert(x);
	}
	arr[0]=0;
	int i=1;
	n=s.size();
	for(auto it:s){
		a[i]=it;
		//cout<<a[i];
		i++;
	}
	Try(1);
	//display();
}
