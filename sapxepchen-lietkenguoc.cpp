#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> arr(n);
	stack<vector<int>> s;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		int j=i-1;
		while(j>=0 &&arr[j+1]<arr[j]){
			swap(arr[j+1],arr[j]);
			j--;
		}
		s.push(arr);
	}
	int h =n;
	while(s.size()){
		arr=s.top();
		s.pop();
		cout<<"Buoc "<<--h<<": ";
		for(int i=0;i<h+1;i++){
			cout<<arr[i]<<' ';
		}
		cout<<endl;
	}
}
