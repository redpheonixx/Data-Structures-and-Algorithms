//Problem Link: "https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0"
#include <bits/stdc++.h>
using namespace std;

void fun(long long int a[], int n, long long int s){
    int start=0;
    long long int cur=a[0];
    int flag=0;
    for(int i=1;i<n;i++){
        cur+=a[i];
        //cout<<"\ncur is "<<cur;
        while(cur>s&& start<i){
            cur-=a[start];
            start++;
        }
        //cout<<"\nAfter subtraction is "<<cur<<" and start is "<<start;
        if(cur==s){
            cout<<start+1<<" "<<i+1;
            return;
        }
        //cout<<endl<<endl;
    }
    cout<<-1;
    return;
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    long long int s;
	    cin>>n>>s;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    fun(a, n, s);
	    cout<<endl;
	}
	
	return 0;
}