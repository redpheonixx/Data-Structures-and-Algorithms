//Problem Link :"https://practice.geeksforgeeks.org/problems/last-index-of-1/0"
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int ans=-1;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='1'){
	            ans=i;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}