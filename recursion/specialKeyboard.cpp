//Problem Link:"https://practice.geeksforgeeks.org/problems/special-keyboard/0"
#include <bits/stdc++.h>
using namespace std;

int fun(int key, int l, int n, int c, int key_prev){
    if(n==0){
        return l;
    }
    if(key==1){
        l++;
        key_prev=1;
        //cout<<"A\n";
    }
    if(key==2){
        //cout<<"Ctrl-A\n";
        key_prev=2;
    }
    if(key==3){
        if(key_prev==2){
            c=l;
            //cout<<"Ctrl-C\n";
        }
        key_prev=3;
    }
    if(key==4){
        //cout<<"Ctrl-V\n";
        l+=c;
        key_prev=4;
    }
    int ans=max(max(fun(1, l, n-1, c, key_prev),fun(2, l, n-1, c, key_prev)), max(fun(3, l, n-1, c, key_prev), fun(4, l, n-1, c, key_prev)));
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=fun(1, 0, n, 0, 1);
        cout<<ans<<"\n";
    }
	return 0;
}