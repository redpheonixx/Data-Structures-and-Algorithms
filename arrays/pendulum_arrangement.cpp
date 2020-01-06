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
        int b[n];
        sort(a, a+n, greater<int>());
        
        if(n%2!=0){
            int i=0, j=n-1, k=0;
            while(i<j){
                b[i++]=a[k++];
                b[j--]=a[k++];
            }
            b[i]=a[k];
        }
        else{
            int i=0, j=n-1, k=0;
            while(i<=j){
                b[j--]=a[k++];
                b[i++]=a[k++];
            }
        }
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;

    }
    return 0;
}
