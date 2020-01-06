
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
#define ll long long
#define MAX 1000003
#define pii pair<int,int>
#define VP vector< pii >
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define all(v) (v).begin(),(v).end()
#define S(x) scanf("%d",&(x))
#define S2(x,y) scanf("%d%d",&(x),&(y))
#define SL(x) scanf("%lld",&(x))
#define SL2(x) scanf("%lld%lld",&(x),&(y))
#define P(x) printf("%d\n",(x))
#define FF first
#define SS second
using namespace std;

int a[100], b[100];
int dp[200][200][200];
int go(int idx, int idx1, int next){
	if(idx==-1 || idx1==-1) return 0;
	if(dp[idx][idx1][next]!=-1) return dp[idx][idx1][next];
	int ans=0;
	if(a[idx]==b[idx1]){
		if(a[idx]<next)
			ans=1+ go(idx-1, idx1-1, a[idx]);
		else
			go(idx-1, idx-1, next);
	}
	ans= max(ans, go(idx-1, idx1, next));
	ans= max(ans, go(idx,idx1-1, next));
	return dp[idx][idx1][next]=ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++)cin>>a[i];
		int m;
		cin>>m;
		for(int i=0;i<m;i++)cin>>b[i];
		memset(dp, -1, sizeof dp);
		int an=go(n-1, m-1, 100);
		cout<<an<<"\n";
	}
	
return 0;
}

