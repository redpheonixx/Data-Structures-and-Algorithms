//Problem Link:"https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion/0"
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
	    int i=0;
	    while(i<n-1){
	        if(a[i]>a[i+1]){
	            swap(a[i], a[i+1]);
	        }
	        i++;
	        if(a[i]<a[i+1] && i<n-1){
	            swap(a[i], a[i+1]);
	        }
	        i++;
	        
	    }
	    for(int i=0;i<n;i++)
	        cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}