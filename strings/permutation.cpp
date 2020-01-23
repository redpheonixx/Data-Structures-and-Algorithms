//Problem Link:"https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0"
//Complexity O(n*n!)
#include <bits/stdc++.h>
using namespace std;

void per(string s, int l, int r, vector<string>&v){
    if(l==r){
        v.push_back(s);
    }
    for(int i=l;i<=r;i++){
        swap(s[l], s[i]);
        per(s, l+1, r, v);
        swap(s[l], s[i]);
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    vector<string>v;
	    int n=s.length();
	    per(s, 0, n-1, v);
	    sort(v.begin(), v.end());
	    for(int i=0;i<v.size();i++){
	       cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}