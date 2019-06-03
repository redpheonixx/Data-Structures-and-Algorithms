#include<bits/stdc++.h>
using namespace std;

vector<int> v;
/**
void number(int n){
	while(n>0){
		v.push_back(n%10);
		n=n/10;
	}
}
**/
void go(int n){
	if(n<=0) return ;
	int temp=n%10;
	v.push_back(temp);
	go(n/10);
}

void print(){
	int i=0;
	while(v[i]==0){
		i++;
	}
	for(;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
/**
void print(){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
**/
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		go(n);
		print();
		cout<<endl;
	}
	return 0;
}
