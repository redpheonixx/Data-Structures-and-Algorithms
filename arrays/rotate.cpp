#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int k;
        cin>>k;
        if(k>n)
            k=k%n;
        int ans[n];
        for(int i=n-1;i>=0;i--){
            if((i-k)<0){
                ans[n-k+i]=a[i];
            }
            else
            {
                ans[i-k]=a[i];
            }
            
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}