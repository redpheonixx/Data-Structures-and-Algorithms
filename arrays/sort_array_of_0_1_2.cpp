//Problem Link "https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0"
#include <iostream>
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
	    int f[3]={0};
	    for(int i=0;i<n;i++)
	        f[a[i]]++;
	    for(int i=0;i<3;i++){
	        while(f[i]--){
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}