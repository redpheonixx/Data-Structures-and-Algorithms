//Problem Link:"https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0"
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, s;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>s;
        sort(a, a+n);
        long long int dif=INT_MAX;
        for(int i=0;i+s-1<n;i++){
            if(dif>a[i+s-1]-a[i])
                dif=a[i+s-1]-a[i];
        }
        cout<<dif<<"\n";
    }
    return 0;
}