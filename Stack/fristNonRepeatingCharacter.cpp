//Problem Link:"https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream/0/#ExpectOP"
#include <bits/stdc++.h>
using namespace std;

void go(vector<char>s, vector<char>&ans, int n){
    map<char, int>mp;
    queue<char>q;
    mp[s[0]]++;
    q.push(s[0]);
    ans.push_back(s[0]);
    for(int i=1;i<n;i++){
        mp[s[i]]++;
        if(q.empty()){
            q.push(s[i]);
        }
        else if(s[i]==q.front()){
            q.pop();
        }
        else{
            q.push(s[i]);
        }
        while(mp[q.front()]>1 && !(q.empty())){
            q.pop();
        }
        if(q.empty())
            ans.push_back('1');
        else
            ans.push_back(q.front());
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<char>s(n);
	    for(int i=0;i<n;i++)
	        cin>>s[i];
	    vector<char>ans;
	    go(s, ans, n);
	    for(int i=0;i<n;i++){
	        if(ans[i]=='1')
	            cout<<-1<<" ";
	        else
	            cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}