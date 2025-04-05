class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    vector<int>s1map(26,0); 
      vector<int>s2map(26,0);
      if(s1.size()>s2.size())
      return false;
      for(int i=0;i<s1.size();i++){
        s1map[s1[i]-'a']++;
        s2map[s2[i]-'a']++;
      }   
      if(s1map==s2map)
      return true;
      int left=0;
      for(int i=s1.size();i<s2.size();i++){
        s2map[s2[i]-'a']++;
        s2map[s2[left]-'a']--;
        left++;
        if(s2map==s1map)
        return true;
      }
      return false;
    }
};