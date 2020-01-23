//Problem Link :"https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0"
include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int i;
        string s;
        cin>>s;
        char st[s.length()];
        for(i=0;i<s.length();i++)
            st[i]=s[i];
        st[i]='\0';
        char *ptr;
        ptr=strtok(st, ".");
        vector<string>v;
        while(ptr!=NULL){
            v.push_back(ptr);
            ptr = strtok (NULL, ".");
        }
        for(i=v.size()-1;i>=0;i--){
            cout<<v[i];
            if(i!=0)
                cout<<".";
        }
        cout<<endl;
    }
}