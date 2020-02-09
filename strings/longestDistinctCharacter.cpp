
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int ans=0;
	    int n=s.length();
	    for(int i=0;i<n;i++){
	        unordered_map<char, int>mp;
	        int count=0;
	        int k=i;
	        while(mp[s[k]]==0 && k<n){
	            mp[s[k]]++;
	            count++;
	            k++;
	        }
	        ans=max(ans, count);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}