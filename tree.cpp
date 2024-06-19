#include <iostream>
#include <stack>
#include <queue>
using namespace std;
stack <int> st;
queue <int> q;
int n,s,a[100][100],check[100],vs[100];
void dfs(int u){
    check[u]=1;
    st.push(u);
    while(!st.empty()){
        int s=st.top();st.pop();
        for(int i=1;i<=n;i++){
            if(a[s][i]==1 &&check[i]==0){
                cout<<s<<' '<<i<<endl;
                check[i]=1;
                st.push(s),st.push(i);
                break;
            }
        }
    }
}

void bfs(int u){
    q.push(u);
    vs[u]=1;
    while(!q.empty()){
        int s=q.front(); q.pop();
        for(int i=1;i<=n;i++){
            if(a[s][i]==1 && vs[i]==0){
            	vs[i]=1;
                cout<<s<<' '<<i<<endl;
                q.push(i);
            }
        }
    }
}
int main(){
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
        check[i]=vs[i]=0;
    }
    cout<<"DFS tree"<<endl;
    dfs(s);
    cout<<"BFS tree" <<endl;
    bfs(s);
}
