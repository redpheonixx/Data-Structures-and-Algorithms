
/*
Just Another Source code by -
  _____         _____        __________      __      __     _____________     ______             _____
 |		\      /  _  \      |___    ___|    |  \    |  |   |_____   _____|   |   __  \          /  _  \
 |	|	 |    /  / \  \         |  |        |   \   |  |         | |         |  |  \  \        /  / \  \
 |	____/    /  /___\  \        |  |        |    \  |  |         | |         |  |__/  /       /  /___\  \
 |  |       |   _____   |       |  |        |  \  \_|  |         | |         |   __  \       |   _____   |
 |  |       |  |     |  |    ___|  |___     |  |\      |         | |         |  |  \  \      |  |     |  |
 |__|       |__|     |__|   |__________|    |__| \_____|         |_|         |_ |   \__\     |__|     |__|
*/

#include<bits/stdc++.h>
using namespace std;

void bfs(int s, vector<int>adj[], bool vis[], int n){
	queue<int>q;
	q.push(s);
	while(!q.empty()){
		int t=q.front();
		q.pop();
		if(vis[t]==false){
			cout<<t<<" ";
			for(int i=0;i<adj[t].size();i++){
				q.push(adj[t][i]);
			}
			vis[t]=true;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, e;
		cin>>n>>e;
		vector<int>adj[n];
		bool vis[n]={false};
		for(int i=0;i<n;i++){
			int u, v;
			cin>>u>>v;
			adj[u].push_back(v);
		}
		bfs(0, adj, vis, n);
		cout<<endl;
	} 
	return 0;
}