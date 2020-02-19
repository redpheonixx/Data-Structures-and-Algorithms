//Problem Link: "https://practice.geeksforgeeks.org/problems/remove-duplicates/0"
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string s;
	    getline(cin, s);
	    unordered_map<char, int>mp;
	    int n=s.length();
	    for(int i=0;i<n;i++){
	        if(mp[s[i]]!=0 ){
	            s[i]='#';
	        }
	        else
	            mp[s[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        if(s[i]!='#')
	            cout<<s[i];
	    }
	    cout<<endl;
	}
	return 0;
}