#include<bits/stdc++.h>
using namespace std;

void algo1(int x[], int n){
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s=0;
            for(int k=i;k<j;k++){
                s+=x[k];
            }
            p=max(p,s);
        }
    }
    cout<<"Answer is by algo 1 with time complexity O(n^3) "<<p<<"\n";
}

void algo2(int x[], int n){
    int p=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=x[j];
            p=max(p,s);
        }
    }
    cout<<"Answer is by algo 2 with time complexity O(n^2) "<<p<<"\n";
}

void kadene(int x[], int n){
    int p=0, s=0;
    for(int i=0;i<n;i++){
        s=max(x[i], s+x[i]);
        p=max(p, s);
    }
    cout<<"Answer is by Kadene's algo with time complexity O(n) "<<p<<"\n";
}

int main(){
    int a[]={-1, 2, 4, -3, 5, 2, -5, 2};
    algo1(a, 8);
    algo2(a, 8);
    kadene(a, 8);
    return 0;
}