#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    //faster();
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        for(int i=2; i<=sqrt(n); i++)
        {
            while(n % i == 0)
            {
                cout << i << ' ';
                n /= i;
            }
        }
        if(n > 1) cout << n << ' ';
        cout << endl;
    }
    return 0;
}
