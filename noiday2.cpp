#include <bits/stdc++.h>
using namespace std;
long long o=1e9 +7;
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		priority_queue<long long, vector <long long>, greater<long long>> q;
		while(n--){
			long long x; cin>>x;
			q.push(x);
		} 
		long long sum=0;
		while(q.size()>1){
			long long a= q.top()%o;
			q.pop();
			long long b=q.top()%o;
			q.pop();
			long long k= (a+b)%o;
			sum+=k%(o);
			sum%=o;
			q.push(k);
		}
		cout<<sum<<endl;
	}
}
