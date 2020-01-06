
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

int a[100], n;
vector<string> v={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void go(int i, int n,  string output){
	if(i==n){
		cout<<output<<" ";
		return;
	}
	for(int j=0;j<v[a[i]].length(); j++){
		output.push_back(v[a[i]][j]);
		go(i+1, n, output);
		output.pop_back();
	}

}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		string output="";
		go(0, n, output);
		cout<<"\n";
	}
	
return 0;
}

