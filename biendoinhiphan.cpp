#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		bool arr[a][b];
		bool brr[a][b]={0};
		int x=0;
		for(int i=0; i<a; i++) {
			for(int j=0; j<b; j++) {
				cin>>arr[i][j];
				if(arr[i][j]==1){
					for(int y=0;y<b;y++){
						brr[i][y]=1;
					}
					for(int y=0;y<a;y++){
						brr[y][j]=1;
					}
				} 
				
			}
			//cout<<endl;
		}
		for(int i=0; i<a; i++) {
			for(int j=0; j<b; j++) {
				cout<<brr[i][j]<<' ';
			}
			cout<<endl;
		}
	}
}

