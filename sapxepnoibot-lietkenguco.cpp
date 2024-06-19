#include <bits/stdc++.h>
using namespace std;
// khai bao vetor <int> a(n);
// dung stack<vector<int>> s;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector <int> arr(n);
		//vector <int> arr[n]
		stack<vector<int>> s;

		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}
		int check =false;
		int h=0;
		for(int i=0; i<n; i++) {
			check =false;
			for(int j=0; j<n-i-1; j++) {
				
				if(arr[j]> arr[j+1]) {
					check=true;
					swap (arr[j],arr[j+1]);
				}
			}
			if(!check ) break;
			s.push(arr);
			h++;
			
		}
		//cout<<h<<endl;
		while(s.size()) {
			cout<<"Buoc "<<h--<<": ";
			arr=s.top();
			for(int j=0; j<n; j++) {
				cout<<arr[j]<<" ";

			}
			s.pop();
			cout<<endl;
		}
	}
}
