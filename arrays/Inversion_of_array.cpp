// Problem Link: https://practice.geeksforgeeks.org/problems/inversion-of-array/0/

#include<bits/stdc++.h>
using namespace std;

long long int merge(long long int a[],long long int temp[], int l, int m, int r){
    int i=l, j=m, k=l;
    long long int count=0;
    while((i<=m-1)&& (j<=r)){
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
            count+=m-i;
        }
    }
    while(i<=m-1){
        temp[k++]=a[i++];
    }
    while(j<=r){
        temp[k++]=a[j++];
    }
    for (i = l; i <= r; i++) 
        a[i] = temp[i]; 
    return count;
}
long long int split(long long int a[], int l, int r, long long int temp[]){
    long long int count=0;
    if(l<r){
        int m=(l+r)/2;
        count+=split(a, l, m, temp);
        count+=split(a, m+1, r, temp);
        count+=merge(a, temp, l, m+1, r);
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;\
        long long int a[n], temp[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long int count=0;
        count=split(a, 0, n-1, temp);
        cout<<count<<endl;
    }
}