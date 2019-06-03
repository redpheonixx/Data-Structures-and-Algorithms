#include<bits/stdc++.h>
using namespace std;

string s;
vector<string>st;
void swap(int i, int j){
	char temp= s[i];
	s[i]=s[j];
	s[j]=temp;
}

void go(int i, int l, set<string>& se){
	if(i==l){
		if(!se.count(s)){
			st.push_back(s);
			se.insert(s);
			return ;
		}
	}
	for(int j=i;j<=l;j++){
		swap(i,  j);
		go(i+1, l, se);
		swap(i, j);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		set<string>se;
		int len= s.length();
		st.clear();
		go(0, len-1, se);
		sort(st.begin(), st.end());
		for(int i=0;i<st.size();i++){
			cout<<st[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}