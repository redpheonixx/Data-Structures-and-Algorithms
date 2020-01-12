
//Problem link "https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1/?track=md-arrays&batchId=144"

//Approach 1
int maxLen(int arr[], int n) // Complexity if O(n^2) and its a brute force technique
{
    int p=0;
    for(int i=0;i<n;i++){
        int o=0,z=0;
        for(int j=i;j<n;j++){
            if(arr[j]==1)
                z++;
            else
                o++;
            if(o==z&&p<o)
                p=o;
        }
    }
    return p*2;
}

//Approach 2
int maxLen(int arr[], int n) //Complexity of O(n)
{
    for(int i=0;i<n;i++)
        if(arr[i]==0) arr[i]=-1;
    map<int, int>mp;
    int s=0, l=0, temp;
    for(int i=0;i<n;i++){
        s+=arr[i];
        if(s==0){
            l=i+1;
        }
        if(mp.find(s)!=mp.end()){
            temp=i-mp[s];
            if(l<temp)
                l=temp;
        }
        else{
            mp[s]=i;
        }
    }
    return l;
}