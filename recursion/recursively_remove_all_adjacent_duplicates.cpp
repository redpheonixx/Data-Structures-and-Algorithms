#include<bits/stdc++.h>
using namespace std;

void go(string s, int i, int l, string output){
    if(i==l) {
        cout<<output;
        return;
    }
    if(s[i]==output[output.length()-1]){
        output.pop_back();
        while(s[i+1]==s[i] && i<l-1){
            i+=1;
        }
        while(s[i]==output[output.length()-1] && i<l-1){
            i+=1;
        }
        
        go(s, i+1, l, output);
    }
    else{
        output.push_back(s[i]);
        go(s, i+1, l, output);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        string output="";
        output.push_back(s[0]);
        go(s,1,l,output);
        cout<<endl;
    }
    return 0;
}
