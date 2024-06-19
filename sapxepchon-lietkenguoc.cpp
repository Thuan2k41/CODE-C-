#include <bits/stdc++.h>
using namespace std;
// khai bao vetor <int> a(n);
// dung stack<vector<int>> s;
int main() {
	{
		int n;
	cin>>n;
	vector <int> arr(n);
	//vector <int> arr[n]
	stack<vector<int>> s;
	
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		int min=arr[i];
		int x=i;
		for(int j=i+1;j<n;j++){
			if(min>arr[j]){
				min=arr[j];
				x=j;
			}
		}
		swap(arr[i],arr[x]);
		s.push(arr);
	}
	int h=n-1;
	while(s.size()){
		cout<<"Buoc "<<h--<<": ";
		arr=s.top();
		for(int j=0;j<n;j++){
			cout<<arr[j]<<" ";
			
		}
		s.pop();
		cout<<endl;
	}
	}
}
