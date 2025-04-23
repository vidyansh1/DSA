class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0,ans=-1;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count ++;
            }
        }
        int left=0,right=k;
        ans=max(ans,count);
         while(right<s.size())
         {
            while((right-left)+1>k)
            {
             if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u')
              {
                ans=max(ans,count);
                count --;
              } left++;
            }
             if(s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u'){
                count++;
             }
             right++;
        } ans=max(ans,count);
        return ans;
    }
};