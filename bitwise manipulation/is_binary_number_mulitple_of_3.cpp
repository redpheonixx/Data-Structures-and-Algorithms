/***
every pow(2,x) can be written as 3*k+1(if even place) or 3*k-1(if odd place).
Write down a few numbers and you'll see the pattern.
so now for this binary number to be divisible by 3 you just have to count the set bits and even place and set bits at odd place since every number is 3k+1 or 3k-1 so only these -1 and +1 will decide whether the number will be divisible by 3 or not.


k is any integer
pow(2,0)=3*0+1;
pow(2,1)=3*1-1;
pow(2,2)=3*1+1;
pow(2,3)=3*3-1;
pow(2,4)=3*5+1;
pow(2,5)=3*11-1;
pow(2,6)=3*21+1;


see that for even powers it's +1 and for odds it's -1. let's say that binary string is 1011 now add 1*(3*0+1) + 1*(3*1-1) + 0*(3*1+1) + 1*(3*3-1)
now opening this we get 1 + 3*1 -1 + 3*3 -1 onpy this which decides that the decimal equivalent os os divisible by 3 is that the sum of +1-1-1 which is not 0 so the number isn't divisible by 3 coz itsi of the form 3*(some integer)-1 now.
***/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long even=0, odd=0;
		for(int i=s.length()-1;i>=0;i--){
			if(s[i]=='1'){
				if(i%2==0)
					even+=1;
				else
					odd+=1;
			}
		}
		//cout<<odd<<" "<<even<<endl;
		long long ans=abs(odd-even)%3;
		if(ans==0)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
}
