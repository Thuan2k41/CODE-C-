#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1005][1005];
bool ok;
int dx[]={1,1,0};
int dy[]={0,1,1};
bool vs[1005][1005];
class Da{
	public: int x,y,cnt;
	Da(int a,int b,int c){
		this->x =a;
		this->y=b;
		this->cnt=c;
	}
};
void find(){
	queue<Da> q;
	q.push(Da(1,1,0));
	vs[1][1]=true;
	while(!q.empty()){
		Da top =q.front();
		q.pop();
		if(top.x == n && top.y==m){
			cout<<top.cnt;
			ok=true;
			return ;
		}
		for(int i=0;i<3;i++){
			int r=top.x;
			int c= top.y;
			int i1=r+dx[i];
			int j1 = c+dy[i];
			int len =0;
			if(i1>=1 && i1<=n && j1>=1&& j1<=m){
				len= abs(a[r][c]-a[i1][j1]);
			}if(len>0){
				int nr =r+dx[i]*len;
				int nc =c +dy[i]*len;
				if(nr>=1 && nr<=n && nc>=1 && nc<=m && !vs[nr][nc]){
					q.push(Da(nr,nc,top.cnt+1));
					vs[nr][nc] =true;
				}
			}
		}
	}
}
void solve(){
	cin>>n>>m;
	memset(vs,0,sizeof(vs));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	ok=false;
	find();
	if(!ok){
		//cout<<-1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}

