//Problem Link:"https://practice.geeksforgeeks.org/problems/unsorted-array/0"
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int mi[n], ma[n], ans;
	    mi[0]=a[0];
	    ma[n-1]=a[n-1];
	    for(int i=1;i<n;i++)
	        mi[i]=max(a[i], mi[i-1]);
	    for(int i=n-2;i>=0;i--)
	        ma[i]=min(a[i], ma[i+1]);
	    /*
	    for(int i=0;i<n;i++)
	        cout<<mi[i]<<" ";
	    cout<<endl;
	    for(int i=0;i<n;i++)
	        cout<<ma[i]<<" ";
	    cout<<endl;
	    */
	    int i;
	    for(i=1;i<n-1;i++){
	        if(mi[i]==ma[i]){
	            ans=i;
	            break;
	        }
	    }
	   //cout<<ans<<endl;
	    if(i>=n-1)
	        cout<<-1<<endl;
	    else
	        cout<<a[ans]<<endl;
	    
	    
	}
	return 0;
}