#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m;
		cin>>a>>m;
		int b=0;
		for(int i=0;i<m;i++){
			if((a*i)%m==1){
				cout<<i;
				b++;
				break;
			}
		}
		if(b==0) cout<<"-1";
		cout<<endl;
	}
}

