#include <bits/stdc++.h>
using namespace std;



int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1, s2;
	    cin>>s1>>s2;
	    unordered_map<char, int>mp;
	    unordered_map<char, int>::iterator it;
	    int n1=s1.length();
	    int n2=s2.length();
	    if(n1!=n2)
	        cout<<"NO"<<endl;
	    else{
	        int flag=1;
	        for(int i=0;i<n1;i++){
	            mp[s1[i]]++;
	        }
	        for(int i=0;i<n1;i++){
	            mp[s2[i]]--;
	        }
	        for(it=mp.begin();it!=mp.end();it++){
	            if(it->second>0){
	                cout<<"NO"<<endl;
	                flag=0;
	                break;
	            }
	        }
	        if(flag==1)
	            cout<<"YES"<<endl;
	    }
	    
	}
	return 0;
}