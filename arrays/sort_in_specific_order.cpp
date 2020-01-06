#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int>o;
        vector<long long int>e;
        for(int i=0;i<n;i++){
            long long int a;
            cin>>a;
            if(a%2==0)
                e.push_back(a);
            else    
                o.push_back(a);
        }
        sort(o.begin(), o.end());
        sort(e.begin(), e.end());
        for(int i=o.size()-1;i>=0;i--)
            cout<<o[i]<<" ";
        for(int i=0;i<e.size();i++)
            cout<<e[i]<<" ";
        cout<<endl;
    }
    return 0;
}