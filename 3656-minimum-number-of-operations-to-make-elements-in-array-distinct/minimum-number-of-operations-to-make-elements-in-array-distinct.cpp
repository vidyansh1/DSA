class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int ele:nums)m[ele]++;
        int cnt=0,i=0;
       while(i<nums.size()){
            // cout<<i<<" "<<nums[i]<<endl;
            if(m[nums[i]]>1){
            cnt++;
            int removed = 0;
            while (removed < 3 && !nums.empty()) {
                int val = nums.front();
                m[val]--;
                if (m[val] == 0) m.erase(val);
                nums.erase(nums.begin());
                removed++;
            }
            i=0;
            }
            else i++;
        }
        return cnt;
    }
};