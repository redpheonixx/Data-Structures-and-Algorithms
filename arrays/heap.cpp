#include<bits/stdc++.h>
using namespace std;

class minHeap{
    int *harr;
    int capacity;
    int heap_size;
    public:
     minHeap(int cap){     //constructor
        heap_size = 0; 
        capacity = cap; 
        harr = new int[cap]; 
    }
     void MinHeapify(int );//to heapify a subtree with the root at given index
     int parent(int i){    //parent of given node at index i
         return (i-1)/2;
     }
     int left(int i){      //left child of node at index i
         return (2*i+1);
     }
     int right(int i){     //right  child of node at index i
         return 2*i+2;
     }
     int extractMin();     //Removes the minimum element from MinHeap
     void decreaseKey(int i, int new_val); // Decreases value of key
     int getMin(){
         return harr[0];
     }
     void deleteKey(int i);
     void insertKey(int k);
};

void minHeap::insertKey(int k){
    if(heap_size==capacity){
        cout<<"\nOverflow: Could not insert Key\n";
        return;
    }
    heap_size++;
    int i=heap_size-1;
    harr[i]=k;
}

int main(){

}
