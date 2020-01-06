#include <iostream>
using namespace std;

void print(int n,int i, int flag){
    cout<<i<<" ";
    if(i==n){
        return;
    }
        
    ///rec case
    if(i>0 && flag==0)
        print(n,i-5, 0);
    else{
        print(n,i+5, 1);
        }
}

int main() {
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int i = n-5;
        cout<<n<<" ";
        print(n,i, 0);
        
        cout<<endl;
        t--;
    }
	//code
	return 0;
}