//Problem:"https://practice.geeksforgeeks.org/problems/next-larger-element/0"
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    vector<long long int>ans(n);
	    stack<long long int>s;
	    s.push(-1);
	    for(int i=n-1;i>=0;i--){
	        while(!s.empty() && a[i]>=s.top())
	            s.pop();
	        ans[i]=s.empty() ? -1:s.top();
	        s.push(a[i]);
	    }
	    for(int i=0;i<n;i++)
	        cout<<ans[i]<<" ";
	    cout<<endl;
	}
	return 0;
}