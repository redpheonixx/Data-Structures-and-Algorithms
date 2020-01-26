//Problem Link: https://practice.geeksforgeeks.org/problems/nth-fibonacci-number/0
#include <bits/stdc++.h>
using namespace std;

long long int dp[10000];

long long int go(long long int n){
    if(n<=1)
        return n;
    if(dp[n]!=-1)
        return dp[n];
    return(dp[n]=(go(n-1)+go(n-2))%1000000007);
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    memset(dp, -1, sizeof dp);
	    long long int n;
	    cin>>n;
	    long long int ans=go(n);
	    cout<<ans<<endl;
	}
	return 0;
}