//Problem Link: "https://practice.geeksforgeeks.org/problems/missing-number-in-array/0"

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n-1;i++)
	        cin>>a[i];
	    int sum=0;
	    for(int i=0;i<n-1;i++)
	        sum+=a[i];
	    int temp=n*(n+1)/2;
	    cout<<temp-sum<<endl;
	}
	return 0;
}