//Problem Link:"https://practice.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates/0"
#include<bits/stdc++.h>
using namespace std;

string ans;
int flag;

void go(string s, int n){
    if(flag==1){
        return ;
    }
    if(n==0||n==1)
        return;
    ans.clear();
    for(int i=0;i<n;i++){
	        int j=i+1;
	        if(s[i]!=s[i+1])
	            ans.push_back(s[i]);
	        while(s[i]==s[j]){
	            j++;
	        }
	        i=j-1;
	}
    s=ans;
    n=s.length();
    flag=1;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            flag=0;
            break;
        }
    }
    
    go(s, n);
    return;
}


	    
	   
int main() {
	int t;
	cin>>t;
	while(t--){
	    flag=0;
	    string s;
	    cin>>s;
	    int n=s.length();
	    go(s, n);
	    cout<<ans<<endl;
	}
	return 0;
}