class Solution {
public:
    int countGoodSubstrings(string s) {
        vector<bool>count(256,0);
        int left=0,right=0,answer=0;
        int n=s.size();
        if(n<3)
        return 0;
        while(right<n)
        {
          while(count[s[right]]==1)
          {
            count[s[left]]=0;
            left++;  
          }
            count[s[right]]=1;
            if(right-left+1==3)
            {
                answer++;
                count[s[left]]=0;
                left++;
            }
            right++;
        }
       return answer; 
    }
};