#include <bits/stdc++.h>
using namespace std;
int check(int n,int b){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	if(sum==b){
		return 1;
	}else return 0;
}
int main(){
	int x,b;
	cin>>x>>b;
	int a=0,z=0;
	for(int i=pow(10,x-1);i<pow(10,x);i++){
		if(check(i,b)){
			if(a==0){
				cout<<i<<' ';
				
			}
			a++;
			z=i;
		} 
		
	}
	cout<<z;
	if(a==0) cout<<"-1 -1";
}

