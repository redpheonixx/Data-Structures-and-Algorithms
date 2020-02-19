//https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array/0
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>v(n);
        //int max_len=0;
        int min_len=10000;
        for(int i=0;i<n;i++){
            cin>>v[i];
            //max_len=max(v[i], max_len);
            //min_len=min(v[i].length(), min_len);
        }
        for(int i=0;i<n;i++){
            int ku=v[i].length();
            min_len=min(ku, min_len);
        }
            
        int k=0;
        for(int i=0;i<n;i++){
            if(v[i][0]!=v[0][0])
                k=-1;
        }
        if(k==0){
            while(1){
                char temp=v[0][k];
                int flag=0;
                for(int i=1;i<n;i++){
                    if(temp!=v[i][k]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
                k++;
                if(k>min_len){
                    //cout<<1;
                    k--;
                    break;
                }
            }
            for(int i=0;i<k;i++)
                cout<<v[0][i];
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}