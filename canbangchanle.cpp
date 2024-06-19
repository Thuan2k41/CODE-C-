#include <iostream>
#include <math.h>
using namespace std;
int check(int n) {
	int c=0,l=0;
	while(n!=0) {
		if(n%2==0) {
			c++;
		} else {
			l++;
		}
		n/=10;
	}
	if(c==l) return 1;
	else return 0;
}
int main () {
	int n;
	cin>>n;
	int a=0;
    for(int i=pow(10,n-1);i<pow(10,n);i++){
    	if(check(i)==1){
    		cout<<i<<" ";
    		a++;
    		if(a%10==0){
    			cout<<endl;
    			a=0;
			}
		}
	}
}
