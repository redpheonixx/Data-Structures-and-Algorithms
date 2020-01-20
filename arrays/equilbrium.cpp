//Problem Link: "https://practice.geeksforgeeks.org/problems/equilibrium-point/0"
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
   int n;
   cin>>n;
   long long int a[n];
   for(int i=0;i<n;i++)
       cin>>a[i];
   
   //sort(a, a+n);
   long long int sl=0;
   long long int sr=0;
   for(int i=1;i<n;i++)    
       sr+=a[i];
   
   int flag=0, k=0;
   while(sr>=sl && k<n){
       //cout<<sl<<" "<<sr<<endl;
       if(sl==sr){
           cout<<k+1<<endl;
           flag=1;
           break;
       }
       sl+=a[k];
       sr-=a[k+1];
       k++;
   }
   if(flag==0)
       cout<<-1<<endl;
}
return 0;
}