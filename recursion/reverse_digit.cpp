#include<bits/stdc++.h>
using namespace std;

vector<long long> v;
/**
void number(int n){
	while(n>0){
		v.push_back(n%10);
		n=n/10;
	}
}
**/
void go(long long n){
	if(n<=0) return ;
	long long temp=n%10;
	v.push_back(temp);
	go(n/10);
}

void print(){
	long long i=0;
	while(v[i]==0){
		i++;
	}
	for(;i<v.size();i++){
		cout<<v[i];
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
		long long n;
		cin>>n;
		go(n);
		print();
		cout<<endl;
		v.clear();
	}
	return 0;
}
