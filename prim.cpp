#include <iostream>
#include <vector>
int n,k,check[100],a[100][100];
using namespace std;
struct canh{
    int u,v;
};
void prim(int u){
    vector <canh> mst;
    int d=0;
    check[u]=true;
    while(mst.size()<n-1){
        int min= INT_MAX;
        int x,y;
        for(int i=1;i<=n;i++){
            if(check[i] ){
                for(int j=1;j<=n;j++){
                    if(a[i][j]!=0&& !check[j] && min> a[i][j]){
                    
                        min=a[i][j];
                        //	cout<<min<<' ';
                        x=j,y=i;
                    }
                }
            }
        }
        mst.push_back({x,y});
        d+=min;
        check[x]=true;
    }
    cout<<"dH = "<<d<<endl;
    for(canh e :mst ){
        if(e.u>e.v){
            cout<<e.v<<' '<<e.u<<endl;
        }else  cout<<e.u<<' '<<e.v<<endl;
    }
}

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
        check[i]=0;
    }
    prim(k);
}
