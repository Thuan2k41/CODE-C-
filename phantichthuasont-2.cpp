#include <iostream>
#include <math.h>
using namespace std;
void tach(int n) {
	int a=0;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0) {
			while(n%i==0) {
				a++;
				n/=i;
			}
				cout<<i<<" "<<a<<endl;
				a=0;
		}
    if(n!=1) cout<<n<<" -1";
	}
}
int main() {
	int n;
	cin>>n;
	tach(n);
}

