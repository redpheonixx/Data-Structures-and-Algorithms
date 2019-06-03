#include<bits/stdc++.h>
using namespace std;

int go(int n, int k){
	if(n==1){
		return 1;
	}
	return (go(n-1, k)+k-1)%n+1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int ans= go(n, k);
		cout<<ans<<endl;
	}
	return 0;
}
