#include<bits/stdc++.h>
using namespace std;

void merge(long long int a[], int l, int m, int r, int &count){
    int n1= m-l+1;
    int n2= r-m;
    long long int L[n1], R[n2];
    for(int i=0;i<n1;i++)
        L[i]=a[l+i];
    for(int i=0;i<n2;i++)
        R[i]=a[m+1+i];
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
            count++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    
}

void split(long long int a[],int l ,int r, int &count){
    if(l<r){
        int m=(l+r)/2;
        split(a, l, m, count);
        split(a, m+1, r, count);
        merge(a, l, m, r, count);
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int count=0;
        split(a, 0, n-1, count);
        cout<<count<<endl;
    }
}