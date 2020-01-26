#include <bits/stdc++.h>
using namespace std;

void fun(string s, string &ans){
    int n=s.length();
    //cout<<n<<endl;
    for(int i=0;i<n;i++){
    	    if(s[i]=='/' && s[i+1]=='/'){
    	        //cout<<s[i]<<"\n";
    	        while(s[i]!='\\'|| s[i+1]!='n'){
                    //cout<<i<<" ";
    	            i++;}
    	        i+=2;
    	    }
    	    else if(s[i]=='/' && s[i+1]=='*'){
                i+=2;
    	        while((s[i]!='*') || (s[i+1]!='/') && (i<n)){
    	            i++;
    	        }
    	        i+=2;
    	    }
            else
    	        ans+=(s[i]);
    	}
}


int main() {
    int t;
    cin>>t;
    t+=1;
    while(t--){
    	string s;
    	string ans="";
    	getline(cin, s); 
    	//cout<<s;
    	fun(s, ans);
        cout<<ans<<endl;
        ans.clear();
        
    }
	return 0;
}
