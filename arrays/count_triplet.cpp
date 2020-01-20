//Problem Link:"https://practice.geeksforgeeks.org/problems/count-the-triplets/0"

#include<bits/stdc++.h>
using namespace std;

int count1(int a[], int n){
    int max=a[0], count=0;
    for(int i=1;i<n;i++)
        if(a[i]>max)
            max=a[i];
    int f[max+1]={0};
    for(int i=0;i<n;i++)
        f[a[i]]++;
    //case 1
    count+=(f[0]*(f[0]-1)*(f[0]-2))/6;
    //case 2
    for(int i=0;i<=max;i++)
        count+=f[0]*((f[i]*f[i-1])/2);
    //case 3
    for(int i=0;2*i<=max;i++)
        count+=((f[i]*f[i-1])/2)*f[2*i];
    //case 4
    for(int i=0;i<=max;i++){
        for(int j=i+1;i+j<=max;j++){
            count+=f[i]*f[j]*f[i+j];
        }
    }
    return count;
}

int count2(int a[], int n){
    sort(a, a+n);
    int count=0;
    for(int i=n-1;i>1;i--){
        int j=0, k=i-1;
        while(k>j){
            if(a[j]+a[k]==a[i]){
                count++;
                j++;
                k--;
            }
            else if(a[j]+a[k]>a[i]){
                k--;
            }
            else
                j++;
        }
    }
    return count;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans= count2(a, n);
        if(ans==0)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }
	return 0;
}