#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) 
        return a.first < b.first;
    else 
        return a.second > b.second;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            m[a]++;
        }
        vector<pair<int, int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), cmp);
        for (auto it : vec) {
            int x = it.second;
            while (x--) {
                cout << it.first << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
