//Problem Link :"https://practice.geeksforgeeks.org/problems/minimum-platforms/0"
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n], d[n];
	    map<int, int>mp;
	    map<int, int>:: iterator it;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	        cin>>d[i];
	   /*
	    for(int i=0;i<n;i++){
	        mp[a[i]]=mp[d[i]];
	    }
	    int k=0;
	    for(it=mp.begin();it!=mp.end();it++){
	        a[k]=it->first;
	        d[k]=it->second;
	        k++;
	    }
	    */
	    sort(a, a+n);
	    sort(d, d+n);
	    int ans=0;
	    for(int i=0;i<n-1;i++){
	        int count=1;
	        for(int j=i+1;j<n;j++){
	            if(d[i]>=a[j]){
	                count++; 
	            }
	        }
	        ans=max(count, ans);
	    }
	    cout<<ans<<endl;
    }
    	return 0;
}