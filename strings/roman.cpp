#include <bits/stdc++.h>
using namespace std;



int main() {
	int t;
	cin>>t;
	while(t--){
	    unordered_map<char, int> mp;
	    mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
	    string s;
	    cin>>s;
	    int k=s.length();
	    int num=mp[s[k-1]];
	    for(int i=k-2;i>=0;i--){
	        if(mp[s[i]]<mp[s[i+1]])
	            num-=mp[s[i]];
	        else
	            num+=mp[s[i]];
	    }
	    cout<<num<<endl;
	}
	return 0;
}