#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int n1, int n2){
    int i=0, j=0;
    //int l=n1, r=n2;
    while(i<n1 && j<n2){
        if(a[i]>=b[j]){
            cout<<b[j]<<" ";
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
        }
    }
    while(i<n1){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n2){
        cout<<b[j]<<" ";
        j++;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1, n2;
        cin>>n1>>n2;
        int a[n1], b[n2];
        for(int i=0;i<n1;i++)
            cin>>a[i];
        for(int i=0;i<n2;i++)
            cin>>b[i];
        merge(a, b, n1, n2);
        cout<<endl;
    }
}