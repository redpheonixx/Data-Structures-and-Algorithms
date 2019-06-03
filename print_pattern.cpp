#include<bits/stdc++.h>
using namespace std;

void go(int k, int n, int flag){
	if(k==n){
		cout<<k<<" ";
		return ;
	}
	if(flag==0){
		if(k>0){
			cout<<k-5<<" ";
			go(k-5, n, flag);
		}
		else
			go(k+5, n, 1);
	}
	else{
		cout<<k<<" ";
		go(k+5, n, flag);
	}

}



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<n<<" "<<n-5<<" ";
		go(n-5, n, 0);
	}
	return 0;
}
