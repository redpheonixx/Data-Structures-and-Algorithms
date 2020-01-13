// Problem Link: "https://practice.geeksforgeeks.org/problems/kth-smallest-element/0/?track=md-arrays&batchId=144"
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        int mp[100000]={0};
        for(int i=0;i<n;i++){
            mp[a[i]]+=1;
        }
        int freq=0;
        for(int i=0;i<100000;i++){
            freq+=mp[i];
            if(freq>=k){
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}