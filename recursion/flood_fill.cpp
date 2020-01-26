#include <bits/stdc++.h>
using namespace std;

void util(int *a, int m ,int n, int k, int c, int x, int y){
    if(x>m-1||y>n-1) return;
    if(*((a+x*n) + y)!=k) return;
    if(*((a+x*n) + y)==k){
        *((a+x*n) + y)=c;
        util((int*)a, m, n, k, c, x+1, y);
        util((int*)a, m, n, k, c, x,  y+1);
        util((int*)a, m, n, k, c, x-1, y);
        util((int*)a, m, n, k, c, x, y-1);
    }
}
void print(int *a, int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*((a+i*n)+j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
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
        print((int*)a, m, n);
	    util((int*)a, m, n, k, c, x, y);
        /*
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            cout<<a[i][j]<<" ";
	        }
	    }
        */
        print((int*)a, m, n);
	    cout<<endl;
	}
	return 0;
}