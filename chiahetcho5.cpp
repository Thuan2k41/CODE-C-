#include <bits/stdc++.h>
using namespace std;
void sum(string s){
	long long n = 0;
    for (auto x : s) {
        n = n * 2 +(x - '0');
        n %= 5;
    }
    if (n == 0) cout << "Yes"<<endl;
    else cout << "No"<<endl;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		sum(s);
	}
}

