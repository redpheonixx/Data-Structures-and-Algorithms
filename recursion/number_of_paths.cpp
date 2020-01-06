#include<bits/stdc++.h>
using namespace std;

long long fac(long long  n){
	if(n==1){
		return n;
	}
	return n*fac(n-1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		long long temp1=fac(m+n-2);
		long long temp2=fac(m-1);
		long long temp3=fac(n-1);
		//cout<<temp1<<" "<<temp2<<" "<<temp3<<" ";
		long long ans= temp1/(temp2*temp3);
		cout<<ans<<endl;
	}
	return 0;
}
