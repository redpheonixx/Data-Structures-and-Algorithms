//Problem Link:"https://practice.geeksforgeeks.org/problems/trapping-rain-water/0"
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
	    int l[n], r[n];
	    int water=0;
	    l[0]=a[0];
	    r[n-1]=a[n-1];
	    for(int i=1;i<n;i++)
	        l[i]=max(a[i], l[i-1]);
	    for(int i=n-2;i>=0;i--)
	        r[i]=max(a[i], r[i+1]);
	    for(int i=0;i<n;i++){
	        water+=abs(min(l[i], r[i])-a[i]);
	    }
	    cout<<water<<endl;
	}
	return 0;
}