#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	long long x=sqrt(t);
	int sum=0;
	while(x!=0){
		x/=10;
		sum++;
	}
	cout<<sum;
}

