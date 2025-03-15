class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int l = *min_element(nums.begin(), nums.end()), r = *max_element(nums.begin(), nums.end()), ans = r;

        while (l <= r) {
            int mid=l+(r-l)/2,cnt=0;
            for(int i=0;i<nums.size();i++)
            if(nums[i]<=mid)cnt++,i++;
            if(cnt>=k)ans=mid,r=mid-1;
            else l=mid+1;
        }
        return ans;
    }
};