//Problem:"https://practice.geeksforgeeks.org/problems/pythagorean-triplet/0"
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
	    for(int i=0;i<n;i++)
	        a[i]=a[i]*a[i];
	    sort(a, a+n);
	    int flag=0;
	    
	    for(int i=n-1;i>1;i--){
	        int l=0;
	        int r=i-1;
    	    while(l<r){
    	        if((a[l]+a[r])==a[i]){
    	            flag=1;
    	            break;
    	        }
    	        else if((a[l]+a[r])<a[i]){
    	            l++;
    	        }
    	        else{
    	            r--;
    	        }
    	    }
    	    if(flag==1)
    	        break;
	    }
	    if(flag==1)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}