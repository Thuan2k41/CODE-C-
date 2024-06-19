#include <bits/stdc++.h>
using namespace std;
struct edge{
	int u,v,w;
}; 
vector <edge> v;
bool cmp(edge a,edge b){
   if (a.w == b.w) {
        if (a.u == b.u) {
            return a.v < b.v;
        }
        return a.u < b.u;
    }
    return a.w < b.w;
}

void Kruskal( int n) {
    int dH = 0;
    vector<pair<int, int>> T;
    vector<bool> vs(n + 1, false);
    
    sort(v.begin(), v.end(), cmp);
    for (edge i: v) {
        if (!vs[i.u] || !vs[i.v]) {
            dH += i.w;
            vs[i.u] = vs[i.v] = true;
            T.push_back({i.u, i.v});
        }
    }

    cout << "dH = " << dH << "\n"; 
    for (auto i : T) {
        cout << i.first << " " << i.second << "\n";
    }
}

int main() {
    int n; cin >> n;
    int a[100][100];
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            if(a[i][j]!=0){
            	edge e;
            	e.u =i, e.v=j, e.w=a[i][j];
            	v.push_back(e);
			}
        }
    }
    Kruskal( n);
    return 0;
}
