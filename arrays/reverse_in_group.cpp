//Problem Link:"https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0"
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i+=k){
            int l=i;
            int r=min(n-1, i+k-1);
            while(l<r){
                swap(a[l], a[r]);
                l++;
                r--;
            }
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}