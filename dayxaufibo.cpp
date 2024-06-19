#include <bits/stdc++.h>
using namespace std;
// a b ba abb abbba 
long long f[100];
void prepare() {
    f[1] =1,f[2] = 1;
    for (int i = 3; i <= 100; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

void testCase() {
    long long n, k;
    cin >> n >> k;
    while (true) {
        if (n == 0 || n == 1) {
            if (n == 0) cout <<"A";
            else cout << "B";
            return;
        }
        if (k > f[n - 2]) {
            k -= f[n - 2];
            n--;
        }
        else
            n -= 2;
    }
}

int main() {
    prepare();
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
