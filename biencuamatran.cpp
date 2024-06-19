#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int a;
		cin>>a;
		int arr[a][a];
		for(int i=0; i<a; i++) {
			for(int j=0; j<a; j++) {
				cin>>arr[i][j];
				
			}
		}
		for(int i=0; i<a; i++) {
			for(int j=0; j<a; j++) {
				if(i==0||j==0||j==a-1||i==a-1){
					cout<<arr[i][j]<<" ";
				}else cout<<"  ";
				
			}
			cout<<endl;
		}
		
	}
}

