#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, ans;
        cin>>n>>k;
        ans=n-1;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a, a+n);
        int dif=abs(a[0]-k);
        for(int i=0;i<n;i++){
            if(dif>=abs(a[i]-k)){
                dif=abs(a[i]-k);
                ans=i;
            }
            else
            {
                break;
            }
        }
        cout<<a[ans]<<endl;
    }
    return 0;
}