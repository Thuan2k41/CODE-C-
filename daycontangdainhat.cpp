#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n+1], l[n+1];
//	memset(l,1,sizeof(l);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		l[i]=1; 
	} 
	for(int i=1;i<n;i++){
		int x=i+1,k=i;
		while(k>=1){
			if(a[x]>a[k]){
				l[x]=max(l[k]+1,l[x]);		
			}	
				k--;
			
		}
	}
	int z=0;
	for(int i=1;i<n;i++){
		z=max(z,l[i+1]);
	}  
	cout<<z<<endl;
}
