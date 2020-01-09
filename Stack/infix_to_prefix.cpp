#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
}

void infix_to_prefix(string s){
    stack<char>st;
    int l= s.length();
    string ns;
    for(int i=0;i<l;i++){
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
            ns+=s[i];
        else if(s[i]=='(')
            st.push('(');
        else if(s[i]==')'){
            while(!st.empty() && st.top!='('){
                char c=st.top();
                st.pop();
                ns+=c;
            }
            
        }
    }
}

int main(){
    string exp="a+b*(c^d-e)^(f+g*h)-i"; 

}