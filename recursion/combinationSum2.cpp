//Problem Link:"https://practice.geeksforgeeks.org/problems/combination-sum-part-2/0"
#include<bits/stdc++.h>
using namespace std;
int flag=0;
void fun(vector<vector<int>>&r, vector<int>&a, vector<int>&v, int i, int target, int n){
    if(target==0){
        //cout<<"done\n";
        flag=1;
        r.push_back(v);
        return;
    }
    if(target<0)
        return;
    for(int j=i;j<n;j++){
        //cout<<"target "<<target<<endl;
        if(j!=i && a[j]==a[j-1]){
            continue;
        }
        if(a[j]>target)
            break;
        v.push_back(a[j]);
        fun(r, a, v, j+1, target-a[j], n);
        v.pop_back();
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        flag=0;
        vector<int>a;
        a.resize(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int b;
        cin>>b;
        vector<int>v;
        vector<vector<int>>r;
        sort(a.begin(), a.end());
        fun(r, a, v, 0, b, n);
        if(flag==0){
            cout<<"Empty";
        }
        else{
            for(int i=0;i<r.size();i++){
                vector<int>temp=r[i];
                cout<<"(";
                for(int j=0;j<temp.size();j++){
                    cout<<temp[j];
                    if(j!=temp.size()-1)
                        cout<<" ";
                }
                cout<<")";
            }
        }
        cout<<endl;
    }
    return 0;
}