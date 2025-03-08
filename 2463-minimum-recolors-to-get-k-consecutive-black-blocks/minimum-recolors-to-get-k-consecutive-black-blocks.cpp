class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans = INT_MAX; 
    for (int i = 0; i <= blocks.size() - k; i++) {
        int count = 0, color = 0;
        for (int j = i; j < i + k; j++) {
         if (blocks[j] == 'W') {
         color++;
        count++;
         }
        }
      ans = min(ans, color);
     }
        
        return ans;
    }
};
