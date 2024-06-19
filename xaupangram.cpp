#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore() ;
	while(t--){
		string s;
		getline(cin,s);
		
		int x;
		cin>>x;
		int a[26] ={0};
		for(char x:s){
			a[x-'a']=1;
		} 
		int sum=0;
		for(int i=0;i<26;i++){
			if(a[i]==0){
				sum++;
			}
		}
		if(sum<=x){
			cout<<"1"<<endl;
		}else cout<<"0"<<endl;
		cin.ignore() ;
	}
}

