#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,a,b;
		cin>>m>>n>>a>>b;
	    int i=a,j=b;
	    int x=1;
	    int z=a;
	    set<int> s;
	    while(z<=n){
	    	z=i*x;
	    	if(z>=m&&z<=n){
	    		s.insert(z);
			}x++;
		}
		x=1,z=b;
		while(z<=n){
	    	z=j*x;
	    	if(z>=m&&z<=n){
	    		s.insert(z);
			} x++;
		}
		cout<<s.size()<<endl;
	}
}

