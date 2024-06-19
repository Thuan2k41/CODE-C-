#include <bits/stdc++.h>
using namespace std;
int n;
vector <int> arr(100);
int x=1;
stack <vector<int>> st;
void display() {
	while(st.size()) {
		arr = st.top();
		cout<<"[";
		for(int i=1;i<=n-x+1;i++){
			if(i==n-x+1){
				cout<<arr[i];
			}else{
				cout<<arr[i]<<" ";
			}
		}
		cout<<"] ";
		st.pop();
		x--;
	}
}
void Try() {
	while(x<=n) {
		//display(x);
		st.push(arr);
		x++;
		for(int i=1; i<=n-x+1; i++) {
			arr[i]+=arr[i+1];

		}

	}

}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		for(int i=1; i<=n; i++) {
			cin>>arr[i];
		}
		Try();
		x--;
		display();
		cout<<endl;
		x=1;
	}
}
