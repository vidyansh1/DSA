class Solution {
public:
  bool valid_candy(vector<int>&candies,int mid,long long k){
   int n=candies.size();
   for(int i=0;i<n;i++){
    k-=candies[i]/mid;
    if(k<=0)
    return 1;
   }
   return k<=0;
  }
    int maximumCandies(vector<int>& candies, long long k) {
        int maxi=INT_MIN;long long sum=0;
        for(int i=0;i<candies.size();i++){
          maxi=max(maxi,candies[i]);
            sum+=candies[i];
        }
        if(sum<k)
        return 0;
       int start=1,end=maxi,ans=0;
       while(start<=end){
        int mid=start+(end-start)/2;
        if(valid_candy(candies,mid,k)){
        ans=mid;
         start=mid+1;
         }else
          end=mid-1;
       } 
    return ans;    
    }
};