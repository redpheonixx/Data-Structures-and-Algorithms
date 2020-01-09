#include<bits/stdc++.h>
using namespace std;

void print(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"Elements in stack are\n";
    print(st);
    st.pop();
    cout<<"\nElements are poping one  elements\n";
    print(st);
    return 0;

}