// Problem Link :"https://practice.geeksforgeeks.org/problems/parenthesis-checker/0"
#include <bits/stdc++.h>
using namespace std;

int fun(string s){
    stack<char>st;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }
        if(s[i]==')'){
            if(st.empty())return 0;
            if(st.top()!='(')
                return 0;
            st.pop();
        }
        if(s[i]==']'){
            if(st.empty())return 0;
            if(st.top()!='[')
                return 0;
            st.pop();
        }
        if(s[i]=='}'){
            if(st.empty())return 0;
            if(st.top()!='{')
                return 0;
            st.pop();
        }
        
    }
    if(st.empty())
        return 1;
    else
        return 0;
}


int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string s;
	    cin>>s;
	    int ans=fun(s);
	    if(ans==1){
	        cout<<"balanced"<<endl;
	    }
	    else
	        cout<<"not balanced"<<endl;
	}
	return 0;
}