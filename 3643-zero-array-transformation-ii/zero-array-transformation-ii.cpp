class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> changes(nums.size() + 1, 0);
        
        int totalDecrease = 0;
        int queryIndex = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            while (totalDecrease + changes[i] < nums[i]) {
                if (queryIndex == queries.size()) {
                    return -1;
                }

                int start = queries[queryIndex][0];
                int end = queries[queryIndex][1];
                int value = queries[queryIndex][2];
                
                queryIndex++;

                if (end < i) {
                    continue;
                }

                changes[max(start, i)] += value;
                if (end + 1 < nums.size()) {
                    changes[end + 1] -= value;
                }
            }

            totalDecrease += changes[i];
        }

        return queryIndex;
    }
};
