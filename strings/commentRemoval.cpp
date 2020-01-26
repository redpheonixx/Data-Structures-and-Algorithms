//Problem Link:"https://practice.geeksforgeeks.org/problems/comment-removal/0"
#include <bits/stdc++.h>
using namespace std;

string fun(string s){
    int n=s.length();
    string ans="";
    //cin.ignore();
    //cout<<n<<endl;
    for(int i=0;i<n;i++){
    	    if(s[i]=='/' && s[i+1]=='/'){
    	        //cout<<s[i]<<"\n";
    	        while(s[i]!='\\'|| s[i+1]!='n'){
                    //cout<<i<<" ";
    	            i++;}
    	        i+=1;
    	        if(s[i]==' ')
    	            i+=1;
    	    }
    	    else if(s[i]=='/' && s[i+1]=='*'){
                i+=2;
    	        while((s[i]!='*') || (s[i+1]!='/') && (i<n)){
    	            i++;
    	        }
    	        i+=1;
    	    }
            else
    	        ans+=(s[i]);
    	}
    	return ans;
}


int main() {
    int t;
    cin>>t;
    string s, ans;
    cin.ignore();
    while(t--){
        getline(cin, s);
        ans=fun(s);
        cout<<ans<<endl;
    }
    
	return 0;
}
