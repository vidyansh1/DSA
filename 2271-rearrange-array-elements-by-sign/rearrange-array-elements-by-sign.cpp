class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> positive, negative;
        int n = nums.size();
        for (int i = 0; i < n; i++) 
        {
            if (nums[i] > 0) 
            {
                positive.push_back(nums[i]);
            } 
            else
                negative.push_back(nums[i]);
        }

     int pos=0, neg = 0;
     for (int i = 0; i < n; i++) 
     {
      if (i % 2 == 0)
       {
                if (pos < positive.size())
                 {
                    nums[i] = positive[pos++];
                }
        } 
      else 
       {
                // Place negative number at odd indices
                if (neg < negative.size()) 
                {
                    nums[i] = negative[neg++];
                }
        }
     }
            return nums;
     }
    };