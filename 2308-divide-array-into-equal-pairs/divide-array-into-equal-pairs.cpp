class Solution {
public:
    bool divideArray(vector<int>& nums) {
       vector<int>count(1000,0);int pairs,temp=0;
       for(int i=0;i<nums.size();i++){
         count[nums[i]]++;
       } 
       pairs=nums.size()/2;
       for(int i=0;i<count.size();i++){
        temp+=count[i]/2;
        if(temp==pairs)
        return true;
       }
       return false;
    }
};