#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		if(n==0){
			cout<<0<<endl;
		}
		else{
			while(n>0){
				if(n%2==0)
					v.push_back(0);
				else
					v.push_back(1);
				n=n/2;
			}	
			int i=0;
			while(v[i]!=1 &i<v.size()-1 ){
				i++;
			}
			cout<<i+1<<endl;
		}
	}
	return 0;
}		
