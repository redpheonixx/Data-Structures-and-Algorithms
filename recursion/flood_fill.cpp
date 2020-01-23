#include <bits/stdc++.h>
using namespace std;

void util(int m ,int n, int a[][n], int k, int c, int x, int y){
    if(x>m||y>n) return;
    if(a[x][y]!=k) return;
    if(a[x][y]==k){
        a[x][y]=c;
        util(m, n, a, k, c, x+1, y);
        util(m, n, a, k, c, x,  y+1);
        util(m, n, a, k, c, x-1, y);
        util(m, n, a, k, c, x, y-1);
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int m, n;
	    cin>>m>>n;
	    int a[m][n];
	    for(int i=0;i<m;i++)
	        for(int j=0;j<n;j++)
	            cin>>a[i][j];
	    int x, y, c;
	    cin>>x>>y>>c;
	    int k=a[x][y];
	    util(m, n, a, k, c, x, y);
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            cout<<a[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}