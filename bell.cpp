#include <iostream> 
long long INF = 1e6;
using namespace std;
int n,s;
int a[100][100], truoc[100],d[100]={0};
void bellmanford(){
    for(int i=1;i<=n;i++){
        d[i]=a[s][i];
        truoc[i]=s;
    }
    d[s]=0;
    for(int i=1;i<n-2;i++){
        for(int v=1;v<=n;v++){
            for(int u=1;u<=n;u++){
                if(d[v]> d[u]+a[u][v] && d[u]!= INF && a[u][v]!=INF){
                    d[v]=d[u]+a[u][v];
                    truoc[v]=u;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<"K/c "<<s<< " -> "<<i<< " = ";
        if(d[i] == INF) cout<<INF<<";" <<endl;
        else if(i==s) cout<<0<<"        "<< i<<' <- '<<s<<endl;
        else{
            cout<< d[i]<<";     ";
            while(s!=truoc[i]){
                cout<<truoc[i]<<"<-";
                i=truoc[i];
            }
            cout<<s<<endl;
        }
    }
}
int main(){
    
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]==0) a[i][j]=INF;
        }
       
    }

    bellmanford();
}
