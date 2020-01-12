// problem link - "https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1"
int maxLen(int A[],int n)
{
  map<int, int>mp;
  int ans=0, s=0;
  for(int i=0;i<n;i++){
      s+=A[i];
      if(s==0){
          ans=i+1;
      }
      if(mp.find(s)!=mp.end()){
          ans=max(ans, i-mp[s]);
      }
      else
        mp[s]=i;
  }
  return ans;
}