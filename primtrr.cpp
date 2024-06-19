#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,k,check[100],a[100][100];
int d=0;

struct canh{
    int u,v;
};
 vector <canh> mst;
void prim(int u){
   
    
    check[u]=true;
    while(mst.size()<n-1){
        long long min= 1e9;
        int x,y;
        for(int i=1;i<=n;i++){
            if(check[i] ){
                for(int j=1;j<=n;j++){
                    if(a[i][j]!=0&& !check[j] && min> a[i][j]){
                        min=a[i][j];
                        x=j,y=i;
                    }
                }
            }
        }
        mst.push_back({x,y});
        d+=min;
        check[x]=true;
    }
    
}
void print(){
	cout<<"dH = "<<d<<endl;
    for(canh e :mst ){
        if(e.u>e.v){
            cout<<e.v<<' '<<e.u<<endl;
        }else  cout<<e.u<<' '<<e.v<<endl;
    }
}
int check1(){
	for(int i=1;i<=n;i++){
		if(check[i]==0)
		return 0;
	}
	return 1;
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
    if(check1()){
    	print();
	}else cout<<"No spanning tree"<<endl;
}
