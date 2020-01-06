#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n==0)
			cout<<"NO\n";
		else{
			if(!(n&(n-1)))
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	return 0;
}		
