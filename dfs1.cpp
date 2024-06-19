#include <iostream>
#include <stack>
using namespace std;
int check[100];
int n,a[100][100];
stack <int> st;
void dfs(int u){
    cout<<u<<' ';
    check[u]=true;
    st.push(u);
    while(!st.empty()){
    	int s=st.top(); st.pop(); 
    	for(int i=1;i<=n;i++){
    		if(a[s][i]==1 && check[i]==0){
    			cout<<i<<' ';
    			check[i]=true;
    			 st.push(i); st.push(s); //khi dong 0000
    			break;
			}
		}
	}
}
int main(){
    
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            check[i] =false;
        }
    }
    dfs(1);
}
