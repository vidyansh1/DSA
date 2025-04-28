class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
      double right=k,left=0, count=0;
      double sum=0,avg=0;
      for(int i=0;i<k;i++)
      {
        sum+=arr[i];
      }
        avg=sum/k;
        if(avg>=threshold){
            count++;
        } 
      while(right<arr.size())
      {
        sum+=arr[right];
        if(right-left+1>k)
        {
            sum-=arr[left];
            left++;
        }
      //  sum+=arr[right];
        avg=sum/k;
        if(avg>=threshold){
            count++;
        }
        right++;
      }
      return count;
    }
};