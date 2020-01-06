#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, xa=0, xb=0;
		cin>>n;
		int a[n-1];
		for(int i=0;i<n-1;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++)
			xa=xa^a[i];
		for(int i=1;i<=n;i++)
			xb=xb^i;
		int ans= xb^xa;
		cout<<ans<<"\n";
	}
	return 0;
}		
