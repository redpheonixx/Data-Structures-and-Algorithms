// Problem Link: "https://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0/?track=md-arrays&batchId=144"
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<int>b;
        vector<int>s;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int buy=0, sell=0, prev=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>=prev){
                if(i==n-1){
                    sell++;
                    if(buy!=sell){
                        b.push_back(buy);
                        s.push_back(i);
                    }
                }
                prev=a[i];
                sell+=1;
            }
            else{
                if(buy!=sell){
                    b.push_back(buy);
                    s.push_back(sell);
                }
                buy=i;
                sell=i;
                prev=a[i];
            }
        }
        int te=b.size();
        if(te==0){
            cout<<"No Profit";
        }
        else{
            for(int i=0;i<b.size();i++){
                cout<<"("<<b[i]<<" "<<s[i]<<")"<<" ";
            }
        }
        cout<<endl;
    }
}