#include<bits/stdc++.h>
using namespace std;

void dfs(int s, vector<int>g[], bool vis[]){
	vis[s]=true;
	cout<<s<<" ";
	vector<int>::iterator it;
	for(it=g[s].begin();it!=g[s].end();it++){
		if(!vis[*it])
			dfs(*it, g, vis);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, e;
		cin>>n>>e;
		vector<int>g[n];
		for(int i=0;i<e;i++){
			int u, v;
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		bool vis[n];
		memset(vis, false, sizeof(vis));
		dfs(0, g, vis);
		cout<<endl;
	}
	return 0;
}